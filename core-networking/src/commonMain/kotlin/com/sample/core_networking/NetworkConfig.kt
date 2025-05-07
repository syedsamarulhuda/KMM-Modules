package com.sample.core_networking

interface NetworkConfig {
    val baseUrl: String?
    val overriderGzip: Boolean
        get() = false
    val isHttps: Boolean
        get() = true
    val showNetworkLogs: Boolean
        get() = false
}
