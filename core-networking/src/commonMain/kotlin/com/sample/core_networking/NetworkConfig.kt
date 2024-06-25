package com.sample.core_networking

interface NetworkConfig {
    val baseUrl: String?
    val overriderGzip: Boolean
        get() = false
}