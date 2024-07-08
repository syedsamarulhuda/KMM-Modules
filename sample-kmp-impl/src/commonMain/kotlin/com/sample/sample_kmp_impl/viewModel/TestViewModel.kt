package com.sample.sample_kmp_impl.viewModel

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.sample.common_api.SharedResourceApi
import com.sample.sample_kmp_module.usecase.TestUsecase
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.launch

class TestViewModel(
    private val testUsecase: TestUsecase,
    val sharedResourceApi: SharedResourceApi
) : ViewModel() {

    val text = MutableStateFlow("")

    fun getTextValue() {
        viewModelScope.launch(Dispatchers.IO) {
            val response = testUsecase.getResponse("api/users")
            text.value = response.toString()
        }
    }
}