package com.sample.injector.sample_kmp

import com.sample.sample_kmp_module.ui.TestMainPage
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject


object SampleKmpProvider :KoinComponent{
    val testMainPage: TestMainPage by inject()
}