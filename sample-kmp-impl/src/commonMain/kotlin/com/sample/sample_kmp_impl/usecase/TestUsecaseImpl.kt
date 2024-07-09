package com.sample.sample_kmp_impl.usecase

import com.sample.common_api.data.TestDataModel
import com.sample.sample_kmp_module.repository.TestRepository
import com.sample.sample_kmp_module.usecase.TestUsecase

class TestUsecaseImpl(private val testRepository: TestRepository) : TestUsecase {
    override suspend fun getResponse(url: String): TestDataModel? {
        return testRepository.getResponse(url)
    }
}