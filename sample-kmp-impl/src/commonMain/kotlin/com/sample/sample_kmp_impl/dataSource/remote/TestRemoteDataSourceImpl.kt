package com.sample.sample_kmp_impl.dataSource.remote

import com.sample.common_api.data.TestDataModel
import com.sample.common_api.util.extensions.urlToSegment
import com.sample.core_networking.NetworkClient
import com.sample.core_networking.Result.Error
import com.sample.core_networking.Result.Loading
import com.sample.core_networking.Result.Success
import com.sample.sample_kmp_module.dataSource.database.TestRemoteDataSource
import com.sample.sample_kmp_module.parser.TestParser

class TestRemoteDataSourceImpl(
    private val networkClient: NetworkClient,
    private val testParser: TestParser
) : TestRemoteDataSource {
    override suspend fun fetchData(path: String): TestDataModel? {
        val segments = path.urlToSegment()
        val query = mutableMapOf<String, String>()
        query["page"] = "1"
        return when (val response =
            networkClient.get<String>(pathSegment = segments, queryParam = query)) {
            is Success -> {
                val response = response.data?.response
                val testDataModel: TestDataModel? = testParser.deserializer(response)
                println("##DATA here 1 ${testDataModel}")
                testDataModel
            }

            is Error -> {
                response.exception.toString()
                null
            }

            Loading -> {
                null
            }
        }
    }
}