package com.sample.core_database

import androidx.room.Room
import androidx.sqlite.driver.bundled.BundledSQLiteDriver
import platform.Foundation.NSHomeDirectory

class IosDataBase : Database {
    override fun getAppDatabase(databaseName: String): AppDatabase {
        val dbFile = NSHomeDirectory() + "/" + databaseName
        return Room.databaseBuilder<AppDatabase>(
            name = dbFile,
            factory = { AppDatabase::class.instantiateImpl() }
        )
            .setDriver(BundledSQLiteDriver())
            .build()
    }
}