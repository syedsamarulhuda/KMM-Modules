package com.sample.sample_kmp_module.usecase

interface TestUsecase {
    suspend fun getResponse(url: String):String?
}