package com.sample.injector.di

import com.sample.injector.database.getDbModules
import com.sample.injector.network.getNetworkModules
import com.sample.injector.pref.getSharedPrefModules
import com.sample.injector.resource.resourceModule
import com.sample.injector.sample_kmp.getSampleKmpModules

fun kmmAppModule() =
    getNetworkModules() + getSampleKmpModules() + getDbModules() + getSharedPrefModules() + resourceModule()