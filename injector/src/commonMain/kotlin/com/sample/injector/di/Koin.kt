package com.sample.injector.di

import com.sample.injector.database.getDbModules
import com.sample.injector.network.getNetworkModules
import com.sample.injector.sample_kmp.getSampleKmpModules

fun kmmAppModule() = getNetworkModules() + getSampleKmpModules() + getDbModules()