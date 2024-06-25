package com.sample.sample_kmp_module.repository

interface TestRepository {

    suspend fun getResponse(path: String):String?
}