package com.sample.core_database.data

import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity
data class TestEntity(
    @PrimaryKey(autoGenerate = true) val id: Int = 0,
    val name: String
)
