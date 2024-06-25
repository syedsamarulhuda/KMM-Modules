package com.sample.sample_kmp_impl.repository

import com.sample.sample_kmp_module.dataSource.database.TestRemoteDataSource
import com.sample.sample_kmp_module.dataSource.remote.TestDatabaseSource
import com.sample.sample_kmp_module.repository.TestRepository

class TestRepositoryImpl(
    private val testRemoteDataSource: TestRemoteDataSource,
    private val testDatabaseSource: TestDatabaseSource
) : TestRepository {
    override suspend fun getResponse(path: String): String? {
        testDatabaseSource.insertTest()
        println("##DATA resource ${testDatabaseSource.getCount()}")
        return testRemoteDataSource.fetchData(path)
    }
}