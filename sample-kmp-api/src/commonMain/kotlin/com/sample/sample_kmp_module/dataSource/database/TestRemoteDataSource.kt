package com.sample.sample_kmp_module.dataSource.database

import com.sample.common_api.data.TestDataModel

interface TestRemoteDataSource {
    suspend fun fetchData(path: String): TestDataModel?
}