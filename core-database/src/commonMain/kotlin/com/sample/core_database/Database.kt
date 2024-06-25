package com.sample.core_database

interface Database {
    fun getAppDatabase(databaseName: String):AppDatabase
}