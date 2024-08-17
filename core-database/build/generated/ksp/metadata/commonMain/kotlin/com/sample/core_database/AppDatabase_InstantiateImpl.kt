package com.sample.core_database

import kotlin.reflect.KClass

internal fun KClass<AppDatabase>.instantiateImpl(): AppDatabase =
    com.sample.core_database.AppDatabase_Impl()
