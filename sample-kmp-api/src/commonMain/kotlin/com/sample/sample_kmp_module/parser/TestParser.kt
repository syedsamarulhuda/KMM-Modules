package com.sample.sample_kmp_module.parser

import com.sample.common_api.data.TestDataModel

interface TestParser {

    fun deserializer(json: String?): TestDataModel?
}