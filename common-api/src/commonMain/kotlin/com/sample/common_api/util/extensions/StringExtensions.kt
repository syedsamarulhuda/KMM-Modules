package com.sample.common_api.util.extensions

fun String?.urlToSegment(): List<String> {
    if (this.isNullOrBlank()) return listOf()
    return this.split("/")
}