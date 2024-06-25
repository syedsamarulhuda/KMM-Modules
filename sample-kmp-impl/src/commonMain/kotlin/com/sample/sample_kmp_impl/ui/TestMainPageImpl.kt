package com.sample.sample_kmp_impl.ui

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import com.sample.sample_kmp_impl.viewModel.TestViewModel
import com.sample.sample_kmp_module.ui.TestMainPage
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import org.koin.compose.koinInject

class TestMainPageImpl : TestMainPage {

    @Composable
    override fun Load() {
        val scope = rememberCoroutineScope()
        val text = remember { mutableStateOf("Loading") }
        val viewModel: TestViewModel = koinInject()
        LaunchedEffect(true) {
            viewModel.getTextValue()
        }
        scope.launch(Dispatchers.Main) {
            viewModel.text.collect {
                text.value = it
            }
        }
        Column(Modifier.fillMaxSize().background(Color.White)) {
            Text(
                text = text.value,
                modifier = Modifier.padding(50.dp)
            )
        }
    }
}