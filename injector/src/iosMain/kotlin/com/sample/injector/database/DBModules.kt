package com.sample.injector.database

import com.sample.core_database.DatabaseClient
import org.koin.core.module.Module
import org.koin.dsl.module

actual fun getDbModules(): List<Module> {
    val databaseClient = module {
        single { DatabaseClient(DataConfigImpl()) }
    }
    return listOf(databaseClient)
}