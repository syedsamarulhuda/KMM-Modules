package com.sample.core_networking

import io.ktor.http.HttpStatusCode

data class NetworkResponse<T>(
    val response: T?,
    val headers: Map<String, String>,
    val statusCode: HttpStatusCode?,
)
