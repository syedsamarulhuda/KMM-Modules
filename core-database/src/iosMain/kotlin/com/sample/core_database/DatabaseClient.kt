package com.sample.core_database

import com.sample.core_database.data.TestEntity

actual class DatabaseClient(dataBaseConfig: DataBaseConfig) {

    val appDatabase: AppDatabase by lazy {
        IosDataBase().getAppDatabase(dataBaseConfig.dbName)
    }

    actual suspend fun insertTest() {
        appDatabase.getTestDao().insert(TestEntity(name = "Samar"))
    }

    actual suspend fun getCount(): Int {
        return appDatabase.getTestDao().count()
    }
}