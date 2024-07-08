package com.sample.injector.resource

import com.sample.common_api.SharedResourceApi
import org.koin.core.module.Module
import org.koin.dsl.module

fun resourceModule():List<Module>{

    val resourceModule = module {
        single<SharedResourceApi> { SharedResourceImpl }
    }

    return listOf(resourceModule)
}