package com.sample.sample_kmp_module.dataSource.database

interface TestRemoteDataSource {
    suspend fun fetchData(path: String):String?
}