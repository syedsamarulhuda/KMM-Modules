package com.sample.core_networking

sealed class Result<out R> {

    data class Success<out T>(val data: T?) : Result<T>()
    data class SuccessAndLoading<out T>(val data: T?) : Result<T>()
    data class Error(val exception: Exception) : Result<Nothing>()
    object Loading : Result<Nothing>()

    override fun toString(): String {
        return when (this) {
            is Success<R> -> "Success[data=$data]"
            is SuccessAndLoading<R> -> "SuccessAndLoading[data=$data]"
            is Error -> "Error[exception=$exception]"
            Loading -> "Loading"
        }
    }

    fun <Mapped> map(transform: (R?) -> Mapped?): Result<Mapped> {
        return when (this) {
            is Success -> Success(transform(data))
            is SuccessAndLoading -> SuccessAndLoading(transform(data))
            is Error -> Error(exception)
            Loading -> Loading
        }
    }

    /*val Result<*>.successded
        get() = this is Result.Success && data != null*/

}