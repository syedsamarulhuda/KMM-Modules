package com.sample.core_networking

expect class NetworkClient {

    @Throws(Throwable::class)
    suspend inline fun <reified T> get(
        host: String? = null,
        pathSegment: List<String>?,
        headers: Map<String, String>? = null,
        queryParam: Map<String, String>? = null
    ): Result<NetworkResponse<T>>


}