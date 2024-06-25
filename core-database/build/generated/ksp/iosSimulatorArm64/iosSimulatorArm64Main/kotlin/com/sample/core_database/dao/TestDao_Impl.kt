package com.sample.core_database.dao

import androidx.room.EntityInsertAdapter
import androidx.room.RoomDatabase
import androidx.room.coroutines.createFlow
import androidx.room.util.getColumnIndexOrThrow
import androidx.room.util.performSuspending
import androidx.sqlite.SQLiteStatement
import com.sample.core_database.`data`.TestEntity
import kotlin.Int
import kotlin.String
import kotlin.Suppress
import kotlin.Unit
import kotlin.collections.List
import kotlin.collections.MutableList
import kotlin.collections.mutableListOf
import kotlin.reflect.KClass
import kotlinx.coroutines.flow.Flow

@Suppress(names = ["UNCHECKED_CAST", "DEPRECATION", "REDUNDANT_PROJECTION", "REMOVAL"])
public class TestDao_Impl(
  __db: RoomDatabase,
) : TestDao {
  private val __db: RoomDatabase

  private val __insertAdapterOfTestEntity: EntityInsertAdapter<TestEntity>
  init {
    this.__db = __db
    this.__insertAdapterOfTestEntity = object : EntityInsertAdapter<TestEntity>() {
      protected override fun createQuery(): String =
          "INSERT OR ABORT INTO `TestEntity` (`id`,`name`) VALUES (nullif(?, 0),?)"

      protected override fun bind(statement: SQLiteStatement, entity: TestEntity) {
        statement.bindLong(1, entity.id.toLong())
        statement.bindText(2, entity.name)
      }
    }
  }

  public override suspend fun insert(item: TestEntity): Unit = performSuspending(__db, false, true)
      { _connection ->
    __insertAdapterOfTestEntity.insert(_connection, item)
  }

  public override suspend fun count(): Int {
    val _sql: String = "SELECT count(*) FROM TestEntity"
    return performSuspending(__db, true, false) { _connection ->
      val _stmt: SQLiteStatement = _connection.prepare(_sql)
      try {
        val _result: Int
        if (_stmt.step()) {
          val _tmp: Int
          _tmp = _stmt.getLong(0).toInt()
          _result = _tmp
        } else {
          _result = 0
        }
        _result
      } finally {
        _stmt.close()
      }
    }
  }

  public override fun getAllAsFlow(): Flow<List<TestEntity>> {
    val _sql: String = "SELECT * FROM TestEntity"
    return createFlow(__db, false, arrayOf("TestEntity")) { _connection ->
      val _stmt: SQLiteStatement = _connection.prepare(_sql)
      try {
        val _cursorIndexOfId: Int = getColumnIndexOrThrow(_stmt, "id")
        val _cursorIndexOfName: Int = getColumnIndexOrThrow(_stmt, "name")
        val _result: MutableList<TestEntity> = mutableListOf()
        while (_stmt.step()) {
          val _item: TestEntity
          val _tmpId: Int
          _tmpId = _stmt.getLong(_cursorIndexOfId).toInt()
          val _tmpName: String
          _tmpName = _stmt.getText(_cursorIndexOfName)
          _item = TestEntity(_tmpId,_tmpName)
          _result.add(_item)
        }
        _result
      } finally {
        _stmt.close()
      }
    }
  }

  public companion object {
    public fun getRequiredConverters(): List<KClass<*>> = emptyList()
  }
}
