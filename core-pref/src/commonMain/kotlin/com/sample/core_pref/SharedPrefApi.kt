package com.sample.core_pref

interface SharedPrefApi {
    fun putBoolean(key: String, value: Boolean)
    fun getBoolean(key: String, defaultValue: Boolean): Boolean
    fun putString(key: String, value: String)
    fun getString(key: String, defaultValue: String?): String?
    fun putLong(key: String, value: Long)
    fun getLong(key: String, defaultValue: Long): Long
    fun putInt(key: String, value: Int)
    fun getInt(key: String, defaultValue: Int): Int
    fun removeAll()
    fun remove(key: String)
    fun getAll(): Map<String?, *>?
    fun isKeyExist(key: String): Boolean
}