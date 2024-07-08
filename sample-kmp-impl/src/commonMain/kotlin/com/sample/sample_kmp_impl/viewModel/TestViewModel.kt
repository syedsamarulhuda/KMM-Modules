package com.sample.sample_kmp_impl.viewModel

import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.sample.common_api.SharedResourceApi
import com.sample.common_api.data.TestDataModel
import com.sample.sample_kmp_module.usecase.TestUsecase
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.launch

class TestViewModel(
    private val testUsecase: TestUsecase,
    val sharedResourceApi: SharedResourceApi
) : ViewModel() {

    private val _testModel = MutableStateFlow<TestDataModel?>(null)
    val testDataModel:StateFlow<TestDataModel?> = _testModel.asStateFlow()

    fun getTextValue() {
        viewModelScope.launch(Dispatchers.IO) {
            val testDataModelRes: TestDataModel? = testUsecase.getResponse("api/users")
            _testModel.value = testDataModelRes
        }
    }
}