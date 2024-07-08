package com.sample.sample_kmp_module.dataSource.pref

interface TestLocalPref {

    fun putTestString(key: String, value: String)
    fun getTestString(key: String, defaultValue: String?): String?

}