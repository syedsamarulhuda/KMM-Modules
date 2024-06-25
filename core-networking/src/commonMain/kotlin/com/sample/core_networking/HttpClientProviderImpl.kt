package com.sample.core_networking

import io.ktor.client.HttpClient
import io.ktor.client.HttpClientConfig

interface HttpClientProvider {
    fun httpClient(config: HttpClientConfig<*>.() -> Unit): HttpClient
}

expect class HttpClientProviderImpl():HttpClientProvider {
    override fun httpClient(config: HttpClientConfig<*>.() -> Unit): HttpClient
}