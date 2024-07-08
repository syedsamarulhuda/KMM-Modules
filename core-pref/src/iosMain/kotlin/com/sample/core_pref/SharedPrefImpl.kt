package com.sample.core_pref

import platform.Foundation.NSUserDefaults
import platform.Foundation.valueForKey

class SharedPrefImpl(private val suiteName: String) : SharedPrefApi {

    private var userDefaults = NSUserDefaults(suiteName = suiteName)

    override fun putBoolean(key: String, value: Boolean) {
        userDefaults.setBool(value, key)
    }

    override fun getBoolean(key: String, defaultValue: Boolean): Boolean {
        return userDefaults.boolForKey(key)
    }

    override fun putString(key: String, value: String) {
        userDefaults.setObject(value, key)
    }

    override fun getString(key: String, defaultValue: String?): String? {
        return userDefaults.valueForKey(key) as? String ?: defaultValue
    }

    override fun putLong(key: String, value: Long) {
        userDefaults.setInteger(value, key)
    }

    override fun getLong(key: String, defaultValue: Long): Long {
        return userDefaults.valueForKey(key) as? Long ?: defaultValue
    }

    override fun putInt(key: String, value: Int) {
        userDefaults.setInteger(value.toLong(), key)
    }

    override fun getInt(key: String, defaultValue: Int): Int {
        return (userDefaults.valueForKey(key) as? Long)?.toInt() ?: defaultValue
    }

    override fun removeAll() {
        userDefaults.removeSuiteNamed(suiteName)
    }

    override fun remove(key: String) {
        userDefaults.removeObjectForKey(key)
    }

    override fun getAll(): Map<String?, *>? {
        return userDefaults.dictionaryRepresentation() as? Map<String?, *>?
    }

    override fun isKeyExist(key: String): Boolean {
        return userDefaults.boolForKey(key)
    }
}