package com.sample.injector.network

import com.sample.core_networking.HttpClientProviderImpl
import com.sample.core_networking.NetworkClient
import com.sample.core_networking.getNetworkClient
import org.koin.core.module.Module
import org.koin.dsl.module

fun getNetworkModules(): List<Module> {

    fun provideNetworkClient(): NetworkClient {
        return getNetworkClient(HttpClientProviderImpl(), NetworkConfigImpl())
    }

    val networkClientModule = module {
        single {
            provideNetworkClient()
        }
    }

    return listOf(networkClientModule)
}