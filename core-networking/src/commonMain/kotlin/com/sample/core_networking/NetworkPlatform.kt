package com.sample.core_networking

expect fun getNetworkClient(
    httpClientProvider: HttpClientProvider,
    networkConfig: NetworkConfig
):NetworkClient