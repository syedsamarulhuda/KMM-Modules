package com.sample.core_database.dao

import androidx.room.Dao
import androidx.room.Insert
import androidx.room.Query
import com.sample.core_database.data.TestEntity
import kotlinx.coroutines.flow.Flow

@Dao
interface TestDao {
    @Insert
    suspend fun insert(item: TestEntity)

    @Query("SELECT count(*) FROM TestEntity")
    suspend fun count(): Int

    @Query("SELECT * FROM TestEntity")
    fun getAllAsFlow(): Flow<List<TestEntity>>
}