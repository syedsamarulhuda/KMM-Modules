package com.sample.injector.pref

import com.sample.core_pref.SharedPrefApi
import com.sample.core_pref.SharedPrefImpl
import org.koin.core.module.Module
import org.koin.dsl.module


actual fun getSharedPrefModules(): List<Module> {
    val sharedPref = module {
        single<SharedPrefApi> { SharedPrefImpl("com.sample.kmm") }
    }

    return listOf(sharedPref)
}
