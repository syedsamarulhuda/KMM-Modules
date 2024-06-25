package com.sample.sample_kmp_impl.dataSource.database

import com.sample.core_database.DatabaseClient
import com.sample.sample_kmp_module.dataSource.remote.TestDatabaseSource

class TestDatabaseSourceImpl(private val databaseClient: DatabaseClient) : TestDatabaseSource {
    override suspend fun insertTest() {
        databaseClient.insertTest()
    }

    override suspend fun getCount(): Int {
       return databaseClient.getCount()
    }
}