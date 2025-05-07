package com.sample.injector.network

import com.sample.core_networking.NetworkConfig

class NetworkConfigImpl : NetworkConfig {
    override val baseUrl: String?
        get() = "reqres.in"
    override val isHttps: Boolean = false
    override val showNetworkLogs: Boolean = true
}
