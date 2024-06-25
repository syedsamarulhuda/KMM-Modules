package com.sample.core_database

import android.content.Context
import com.sample.core_database.data.TestEntity

actual class DatabaseClient(dataBaseConfig: DataBaseConfig, context: Context) {

    val appDatabase: AppDatabase by lazy {
        AndroidDataBase(context = context).getAppDatabase(dataBaseConfig.dbName)
    }

    actual suspend fun insertTest() {
        appDatabase.getTestDao().insert(TestEntity(name = "Samar"))
    }

    actual suspend fun getCount(): Int {
        return appDatabase.getTestDao().count()
    }
}