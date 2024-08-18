package com.sample.core_networking

actual class NetworkClient(
    val httpClientProvider: HttpClientProvider,
    val networkConfig: NetworkConfig
) {

    val commonNetworkClient: CommonNetworkClient by lazy {
        CommonNetworkClient(httpClientProvider, networkConfig)
    }

    @Throws(Throwable::class)
    actual suspend inline fun <reified T> get(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?
    ): Result<NetworkResponse<T>> {
        return commonNetworkClient.get(
            host = host, pathSegment = pathSegment, headers = headers, queryParam = queryParam
        )
    }

    @Throws(Throwable::class)
    actual suspend inline fun <reified T> post(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {
        return commonNetworkClient.post(
            host = host,
            pathSegment = pathSegment,
            headers = headers,
            queryParam = queryParam,
            requestBody = requestBody
        )
    }

    @Throws(Throwable::class)
    actual suspend inline fun <reified T> put(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {
        return commonNetworkClient.put(
            host = host,
            pathSegment = pathSegment,
            headers = headers,
            queryParam = queryParam,
            requestBody = requestBody
        )
    }

    @Throws(Throwable::class)
    actual suspend inline fun <reified T> delete(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {
        return commonNetworkClient.delete(
            host = host,
            pathSegment = pathSegment,
            headers = headers,
            queryParam = queryParam,
            requestBody = requestBody
        )
    }

    @Throws(Throwable::class)
    actual suspend inline fun <reified T> patch(
        host: String?,
        pathSegment: List<String>?,
        headers: Map<String, String>?,
        queryParam: Map<String, String>?,
        requestBody: Any?
    ): Result<NetworkResponse<T>> {
        return commonNetworkClient.patch(
            host = host,
            pathSegment = pathSegment,
            headers = headers,
            queryParam = queryParam,
            requestBody = requestBody
        )
    }

}