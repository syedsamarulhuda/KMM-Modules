package com.sample.sample_kmp_impl.dataSource.pref

import com.sample.core_pref.SharedPrefApi
import com.sample.sample_kmp_module.dataSource.pref.TestLocalPref

class TestLocalPrefImpl(private val sharedPref: SharedPrefApi) : TestLocalPref {
    override fun putTestString(key: String, value: String) {
        sharedPref.putString(key, value)
    }

    override fun getTestString(key: String, defaultValue: String?): String? {
        return sharedPref.getString(key, defaultValue)
    }
}