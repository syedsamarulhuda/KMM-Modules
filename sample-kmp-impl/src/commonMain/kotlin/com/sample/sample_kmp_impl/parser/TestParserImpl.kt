package com.sample.sample_kmp_impl.parser

import com.sample.common_api.data.TestDataModel
import com.sample.sample_kmp_module.parser.TestParser
import kotlinx.serialization.json.Json

class TestParserImpl : TestParser {
    override fun deserializer(json: String?): TestDataModel? {
        return try {
            if (json != null) {
                Json.decodeFromString<TestDataModel>(json)
            } else {
                println("Error in Parsing: Json String Empty")
                null
            }
        } catch (e: Exception) {
            println("Error in Parsing: $e ")
            null
        }
    }
}