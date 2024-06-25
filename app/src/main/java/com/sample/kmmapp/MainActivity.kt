package com.sample.kmmapp

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Scaffold
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import com.sample.injector.database.androidAppModules
import com.sample.injector.di.KoinInjector
import com.sample.injector.sample_kmp.SampleKmpProvider
import com.sample.kmmapp.ui.theme.KMMAPPTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        KoinInjector.initiateKoin(androidAppModules(application))
        enableEdgeToEdge()
        setContent {
            KMMAPPTheme {
                Scaffold(modifier = Modifier.fillMaxSize()) { innerPadding ->
                    Greeting(
                        modifier = Modifier.padding(innerPadding)
                    )
                }
            }
        }
    }
}

@Composable
fun Greeting(modifier: Modifier = Modifier) {
    SampleKmpProvider.testMainPage.Load()
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    KMMAPPTheme {
        Greeting()
    }
}