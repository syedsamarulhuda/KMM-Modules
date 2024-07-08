package com.sample.injector.sample_kmp

import com.sample.sample_kmp_impl.dataSource.database.TestDatabaseSourceImpl
import com.sample.sample_kmp_impl.dataSource.pref.TestLocalPrefImpl
import com.sample.sample_kmp_impl.dataSource.remote.TestRemoteDataSourceImpl
import com.sample.sample_kmp_impl.parser.TestParserImpl
import com.sample.sample_kmp_impl.repository.TestRepositoryImpl
import com.sample.sample_kmp_impl.ui.TestMainPageImpl
import com.sample.sample_kmp_impl.usecase.TestUsecaseImpl
import com.sample.sample_kmp_impl.viewModel.TestViewModel
import com.sample.sample_kmp_module.dataSource.database.TestRemoteDataSource
import com.sample.sample_kmp_module.dataSource.pref.TestLocalPref
import com.sample.sample_kmp_module.dataSource.remote.TestDatabaseSource
import com.sample.sample_kmp_module.parser.TestParser
import com.sample.sample_kmp_module.repository.TestRepository
import com.sample.sample_kmp_module.ui.TestMainPage
import com.sample.sample_kmp_module.usecase.TestUsecase
import org.koin.core.module.Module
import org.koin.dsl.module

fun getSampleKmpModules(): List<Module> {

    val testPref = module {
        single<TestLocalPref> { TestLocalPrefImpl(get()) }
    }
    val testDatabaseSource = module {
        single<TestDatabaseSource> { TestDatabaseSourceImpl(get()) }
    }

    val testParser = module {
        single<TestParser> { TestParserImpl() }
    }

    val testRemoteDataSource = module {
        single<TestRemoteDataSource> { TestRemoteDataSourceImpl(get(), get()) }
    }

    val testRepo = module {
        single<TestRepository> { TestRepositoryImpl(get(), get(), get()) }
    }

    val testUsecase = module {
        single<TestUsecase> { TestUsecaseImpl(get()) }
    }

    val testViewModel = module {
        single { TestViewModel(get(), get()) }
    }

    val testUI = module {
        single<TestMainPage> { TestMainPageImpl() }

    }

    return listOf(
        testPref,
        testDatabaseSource,
        testParser,
        testRemoteDataSource,
        testRepo,
        testUsecase,
        testViewModel,
        testUI
    )
}

