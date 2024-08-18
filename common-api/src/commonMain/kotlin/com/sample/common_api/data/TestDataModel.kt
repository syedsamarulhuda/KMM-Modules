package com.sample.common_api.data

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class TestDataModel(
    @SerialName("page") val page: Int,
    @SerialName("per_page") val perPage: Int,
    @SerialName("total") val total: Int,
    @SerialName("total_pages") val totalPages: Int,
    @SerialName("data") val data: List<TestData>,
    @SerialName("support") val support: Support
)

@Serializable
data class TestData(
    @SerialName("id") val id: Int,
    @SerialName("email") val email: String,
    @SerialName("first_name") val firstName: String,
    @SerialName("last_name") val lastName: String,
    @SerialName("avatar") val avatar: String,
)

@Serializable
data class Support(
    @SerialName("url") val lastName: String,
    @SerialName("text") val avatar: String,
)

@Serializable
data class CreateRequest(
    @SerialName("name") val name: String?,
    @SerialName("job") val job: String?,
)
