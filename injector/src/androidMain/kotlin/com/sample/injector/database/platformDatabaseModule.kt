package com.sample.injector.database

import android.app.Application
import android.content.Context
import com.sample.core_database.DatabaseClient
import org.koin.android.ext.koin.androidApplication
import org.koin.core.module.Module
import org.koin.dsl.binds
import org.koin.dsl.module

fun androidAppModules(application: Application) = module {
    single { application } binds arrayOf(Context::class, Application::class)
}

actual fun getDbModules(): List<Module> {

    val databaseClient = module {
        single {
            DatabaseClient(DataConfigImpl(), androidApplication())
        }
    }

    return listOf(databaseClient)
}
