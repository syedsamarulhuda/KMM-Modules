package com.sample.core_database

expect class DatabaseClient {

  suspend fun insertTest()

  suspend fun getCount():Int
}