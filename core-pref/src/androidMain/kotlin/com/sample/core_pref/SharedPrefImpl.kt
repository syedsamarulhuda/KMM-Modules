package com.sample.core_pref

import android.app.Application
import android.content.Context
import android.content.SharedPreferences
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch

@Suppress("OPT_IN_USAGE")
class SharedPrefImpl(application: Application, fileName: String) : SharedPrefApi {

    private var sharedPreferences: SharedPreferences? = null

    init {
        GlobalScope.launch(Dispatchers.IO) {
            sharedPreferences = application.getSharedPreferences(fileName, Context.MODE_PRIVATE)
        }
    }

    override fun putBoolean(key: String, value: Boolean) {
        GlobalScope.launch(Dispatchers.IO) {
            val editor = sharedPreferences?.edit()
            editor?.putBoolean(key, value)
            editor?.apply()
        }
    }

    override fun getBoolean(key: String, defaultValue: Boolean): Boolean {
        return sharedPreferences?.getBoolean(key, defaultValue) ?: false
    }

    override fun putString(key: String, value: String) {
        GlobalScope.launch(Dispatchers.IO) {
            val editor = sharedPreferences?.edit()
            editor?.putString(key, value)
            editor?.apply()
        }
    }

    override fun getString(key: String, defaultValue: String?): String {
        return sharedPreferences?.getString(key, defaultValue) ?: ""
    }

    override fun putLong(key: String, value: Long) {
        GlobalScope.launch(Dispatchers.IO) {
            val editor = sharedPreferences?.edit()
            editor?.putLong(key, value)
            editor?.apply()
        }
    }

    override fun getLong(key: String, defaultValue: Long): Long {
        return sharedPreferences?.getLong(key, defaultValue) ?: 0
    }

    override fun putInt(key: String, value: Int) {
        GlobalScope.launch(Dispatchers.IO) {
            val editor = sharedPreferences?.edit()
            editor?.putInt(key, value)
            editor?.apply()
        }
    }

    override fun getInt(key: String, defaultValue: Int): Int {
        return sharedPreferences?.getInt(key, defaultValue) ?: 0
    }

    override fun removeAll() {
        GlobalScope.launch(Dispatchers.IO) {
            val editor = sharedPreferences?.edit()
            editor?.clear()
            editor?.apply()
        }
    }

    override fun remove(key: String) {
        GlobalScope.launch(Dispatchers.IO) {
            val editor = sharedPreferences?.edit()
            editor?.remove(key)
            editor?.apply()
        }
    }

    override fun getAll(): Map<String?, *>? {
        return try {
            sharedPreferences?.all
        } catch (e: Exception) {
            null
        }
    }

    override fun isKeyExist(key: String): Boolean {
        return sharedPreferences?.contains(key) ?: false
    }
}