package com.sample.core_networking

data class NetworkResponse<T>(
    val response: T?,
    val headers: Map<String, String>
)
