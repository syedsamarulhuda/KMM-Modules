package com.sample.injector.dependencyProvider

import androidx.compose.ui.window.ComposeUIViewController
import com.sample.injector.di.KoinInjector
import com.sample.injector.sample_kmp.SampleKmpProvider
import platform.UIKit.UIViewController

class DependencyProvider {

    fun loadPage(): UIViewController {
        return ComposeUIViewController {
            KoinInjector.initiateKoin()
            SampleKmpProvider.testMainPage.Load()
        }
    }
}