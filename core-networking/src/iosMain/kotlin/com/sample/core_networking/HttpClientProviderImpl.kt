package com.sample.core_networking

import io.ktor.client.HttpClient
import io.ktor.client.HttpClientConfig
import io.ktor.client.engine.darwin.Darwin

actual class HttpClientProviderImpl : HttpClientProvider {

    actual override fun httpClient(config: HttpClientConfig<*>.() -> Unit): HttpClient {
        return HttpClient(Darwin, config)
    }
}