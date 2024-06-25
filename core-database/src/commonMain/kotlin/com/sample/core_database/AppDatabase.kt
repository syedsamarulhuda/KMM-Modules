package com.sample.core_database

import androidx.room.Database
import androidx.room.RoomDatabase
import com.sample.core_database.dao.TestDao
import com.sample.core_database.data.TestEntity


@Database(entities = [TestEntity::class]
    , version = 1
)
abstract class AppDatabase : RoomDatabase() {
    abstract fun getTestDao(): TestDao
}
