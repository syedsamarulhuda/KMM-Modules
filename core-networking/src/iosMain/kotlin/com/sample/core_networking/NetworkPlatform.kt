package com.sample.core_networking

actual fun getNetworkClient(
    httpClientProvider: HttpClientProvider,
    networkConfig: NetworkConfig
): NetworkClient {
    return NetworkClient(httpClientProvider, networkConfig)
}