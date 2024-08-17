package com.sample.sample_kmp_impl.ui

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.wrapContentHeight
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.itemsIndexed
import androidx.compose.foundation.lazy.rememberLazyListState
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.CompositionLocalProvider
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.sample.common_api.ui.LoadImageNetwork
import com.sample.sample_kmp_impl.scope.TestScope
import com.sample.sample_kmp_impl.viewModel.TestViewModel
import com.sample.sample_kmp_module.ui.TestMainPage
import org.koin.compose.LocalKoinScope
import org.koin.compose.getKoin
import org.koin.compose.koinInject

class TestMainPageImpl : TestMainPage {

    @Composable
    override fun Load() {
        val testScope = getKoin().createScope(TestScope())
        CompositionLocalProvider(LocalKoinScope provides testScope) {
            TestContentPage()
        }
    }
}

@Composable
fun TestContentPage() {
    val viewModel: TestViewModel = koinInject()
    val testDataModel = viewModel.testDataModel.collectAsState()
    val listState = rememberLazyListState()

    LaunchedEffect(true) {
        viewModel.getTextValue()
    }

    Box(modifier = Modifier.fillMaxSize()) {
        LazyColumn(
            state = listState,
            modifier = Modifier.fillMaxWidth().wrapContentHeight()
                .padding(vertical = 30.dp, horizontal = 20.dp)
        ) {
            itemsIndexed(items = testDataModel.value?.data.orEmpty()) { index, item ->
                Column(Modifier.fillMaxSize().background(Color.White)) {
                    Text(
                        text = item.firstName,
                        modifier = Modifier.padding(vertical = 20.dp),
                        fontWeight = FontWeight.Bold,
                        fontSize = 12.sp
                    )
                    LoadImageNetwork(
                        imageUrl = item.avatar,
                        modifier = Modifier.fillMaxWidth().padding(vertical = 10.dp)
                    )
                }
            }

        }
    }
}