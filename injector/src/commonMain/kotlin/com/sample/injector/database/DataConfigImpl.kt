package com.sample.injector.database

import com.sample.core_database.DataBaseConfig

class DataConfigImpl : DataBaseConfig {
    override val dbName: String
        get() = "test.db"
}