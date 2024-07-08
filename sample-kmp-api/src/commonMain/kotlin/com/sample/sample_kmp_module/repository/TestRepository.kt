package com.sample.sample_kmp_module.repository

import com.sample.common_api.data.TestDataModel

interface TestRepository {

    suspend fun getResponse(path: String): TestDataModel?

    fun getTestPref()
}