package com.sample.injector.di

import org.koin.core.context.startKoin
import org.koin.core.module.Module

object KoinInjector {

    fun initiateKoin() {
        startKoin {
            modules(kmmAppModule())
        }
    }

    fun initiateKoin(appModule: Module) {
        startKoin {
            modules(appModule + kmmAppModule())
        }
    }
}