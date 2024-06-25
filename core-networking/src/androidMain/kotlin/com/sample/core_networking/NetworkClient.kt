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

}