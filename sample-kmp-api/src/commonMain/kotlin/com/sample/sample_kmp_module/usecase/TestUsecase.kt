package com.sample.sample_kmp_module.usecase

import com.sample.common_api.data.TestDataModel

interface TestUsecase {
    suspend fun getResponse(url: String): TestDataModel?
}