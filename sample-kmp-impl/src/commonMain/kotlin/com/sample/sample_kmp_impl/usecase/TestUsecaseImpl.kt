package com.sample.sample_kmp_impl.usecase

import com.sample.sample_kmp_module.repository.TestRepository
import com.sample.sample_kmp_module.usecase.TestUsecase

class TestUsecaseImpl(private val testRepository: TestRepository) : TestUsecase {
    override suspend fun getResponse(url: String): String? {
        testRepository.getTestPref()
        return testRepository.getResponse(url)
    }
}