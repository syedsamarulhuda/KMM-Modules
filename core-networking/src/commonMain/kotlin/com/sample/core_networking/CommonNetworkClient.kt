package com.sample.core_networking

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.plugins.compression.ContentEncoding
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.plugins.logging.LogLevel
import io.ktor.client.plugins.logging.Logger
import io.ktor.client.plugins.logging.Logging
import io.ktor.client.request.parameter
import io.ktor.client.request.request
import io.ktor.client.request.setBody
import io.ktor.client.statement.HttpResponse
import io.ktor.http.ContentType
import io.ktor.http.HttpMethod
import io.ktor.http.URLProtocol
import io.ktor.http.contentType
import io.ktor.http.headers
import io.ktor.serialization.kotlinx.json.json
import io.ktor.util.logging.KtorSimpleLogger
import io.ktor.util.toMap
import kotlinx.serialization.json.Json

class CommonNetworkClient(
    val httpClientProvider: HttpClientProvider,
    val networkConfig: NetworkConfig
) {

    companion object {
        const val TAG = "NetworkClient"
    }

    val httpClient: HttpClient by lazy {
        httpClientProvider.httpClient {
            install(Logging) {
                level = LogLevel.ALL
                logger = object : Logger {
                    override fun log(message: String) {
                        KtorSimpleLogger("$TAG $message")
                    }
                }
            }

            install(ContentNegotiation) {
                json(Json {
                    prettyPrint = true
                    isLenient = true
                })
            }

            if (networkConfig.overriderGzip) {
                install(ContentEncoding) {
                    gzip()
                }
            }
        }

    }

    @Throws(Throwable::class)
    suspend inline fun <reified T> get(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?
    ): Result<NetworkResponse<T>> {
        return request(host, HttpMethod.Get, pathSegment, headers, queryParam, null)
    }

    @Throws(Throwable::class)
    suspend inline fun <reified T> post(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {
        return request(host, HttpMethod.Post, pathSegment, headers, queryParam, requestBody)
    }

    @Throws(Throwable::class)
    suspend inline fun <reified T> put(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {
        return request(host, HttpMethod.Put, pathSegment, headers, queryParam, requestBody)
    }

    @Throws(Throwable::class)
    suspend inline fun <reified T> delete(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {
        return request(host, HttpMethod.Delete, pathSegment, headers, queryParam, requestBody)
    }

    @Throws(Throwable::class)
    suspend inline fun <reified T> patch(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {
        return request(host, HttpMethod.Patch, pathSegment, headers, queryParam, requestBody)
    }


    @Throws(Throwable::class)
    suspend inline fun <reified T> request(
        host: String?,
        method: HttpMethod,
        pathSegment: List<String>?,
        headersMap: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {

        try {
            val response = httpClient.request {
                this.method = method
                url {
                    this.protocol = URLProtocol.HTTPS
                    this.host =
                        (networkConfig.baseUrl ?: host) ?: throw Exception("Host cannot be null")
                    this.pathSegments = pathSegment ?: listOf()
                }
                requestBody?.run {
                    setBody(this)
                }
                headers {
                    headersMap?.forEach {
                        append(it.key, it.value)
                    }
                }
                contentType(ContentType.Application.Json)
                queryParam?.forEach {
                    parameter(it.key, it.value)
                }
            }

            val data: NetworkResponse<T> = processResponse(response)
            return Result.Success(data)
        } catch (e: Exception) {
            return Result.Error(e)
        }
    }
}

suspend inline fun <reified T> processResponse(
    response: HttpResponse?
): NetworkResponse<T> {
    val body = response?.body<T>()
    val responseHeaders = response?.headers?.toMap()?.mapValues { it.value.first() } ?: emptyMap()
    return NetworkResponse(body, responseHeaders)
}