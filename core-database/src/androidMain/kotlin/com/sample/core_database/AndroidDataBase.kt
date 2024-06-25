package com.sample.core_database

import android.content.Context
import androidx.room.Room
import androidx.sqlite.driver.bundled.BundledSQLiteDriver

class AndroidDataBase(val context: Context) : Database {
    override fun getAppDatabase(databaseName: String): AppDatabase {
        val dbFile = context.applicationContext.getDatabasePath(databaseName)
        return Room.databaseBuilder<AppDatabase>(
            context = context.applicationContext,
            name = dbFile.absolutePath
        )
            .setDriver(BundledSQLiteDriver())
            .build()
    }
}