package com.sample.sample_kmp_module.dataSource.remote

interface TestDatabaseSource {
    suspend fun insertTest()
    suspend fun getCount(): Int
}