package com.sample.sample_kmp_impl.dataSource.remote

import com.sample.common_api.data.CreateRequest
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
                createTest(path)
                putTest(path)
                patchTest(path)
                deleteTest(path)
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

    suspend fun createTest(path: String?) {
        val segments = path.urlToSegment()
        val requestBody = CreateRequest("test", "test")

        when (val response =
            networkClient.post<String>(pathSegment = segments, requestBody = requestBody)) {
            is Success -> {
                val response = response.data?.response
                println("##DATA createTest ${response}")
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

    suspend fun putTest(path: String?) {
        val url = "$path/2"
        val segments = url.urlToSegment()
        val requestBody = CreateRequest("test", "test")

        when (val response =
            networkClient.put<String>(pathSegment = segments, requestBody = requestBody)) {
            is Success -> {
                val response = response.data?.response
                println("##DATA Put test ${response}")
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

    suspend fun patchTest(path: String?) {
        val url = "$path/2"
        val segments = url.urlToSegment()
        val requestBody = CreateRequest("test", "test")

        when (val response =
            networkClient.patch<String>(pathSegment = segments, requestBody = requestBody)) {
            is Success -> {
                val response = response.data?.response
                println("##DATA Patch test ${response}")
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

    suspend fun deleteTest(path: String?) {
        val url = "$path/2"
        val segments = url.urlToSegment()
        val requestBody = CreateRequest("test", "test")

        when (val response =
            networkClient.delete<String>(pathSegment = segments, requestBody = requestBody)) {
            is Success -> {
                val response = response.data?.response
                println("##DATA Delete test ${response}")
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