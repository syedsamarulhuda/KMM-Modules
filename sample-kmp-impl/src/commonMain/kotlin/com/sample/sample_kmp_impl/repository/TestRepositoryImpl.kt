package com.sample.sample_kmp_impl.repository

import com.sample.sample_kmp_module.dataSource.database.TestRemoteDataSource
import com.sample.sample_kmp_module.dataSource.pref.TestLocalPref
import com.sample.sample_kmp_module.dataSource.remote.TestDatabaseSource
import com.sample.sample_kmp_module.repository.TestRepository

class TestRepositoryImpl(
    private val testRemoteDataSource: TestRemoteDataSource,
    private val testDatabaseSource: TestDatabaseSource,
    private val testLocalPref: TestLocalPref
) : TestRepository {
    override suspend fun getResponse(path: String): String? {
        testLocalPref.putTestString("test", "test")
        testDatabaseSource.insertTest()
        return testRemoteDataSource.fetchData(path)
    }

    override fun getTestPref() {
        val test = testLocalPref.getTestString("test", "test")
    }
}