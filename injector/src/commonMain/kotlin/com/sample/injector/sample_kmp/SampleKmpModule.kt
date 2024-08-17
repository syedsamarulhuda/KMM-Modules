package com.sample.injector.sample_kmp

import com.sample.sample_kmp_impl.dataSource.database.TestDatabaseSourceImpl
import com.sample.sample_kmp_impl.dataSource.pref.TestLocalPrefImpl
import com.sample.sample_kmp_impl.dataSource.remote.TestRemoteDataSourceImpl
import com.sample.sample_kmp_impl.parser.TestParserImpl
import com.sample.sample_kmp_impl.repository.TestRepositoryImpl
import com.sample.sample_kmp_impl.scope.TestScope
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

    val testUI = module {
        single<TestMainPage> { TestMainPageImpl() }

    }

    val module = module {
        factory { TestScope() }

        scope<TestScope> {
            scoped<TestRemoteDataSource> { TestRemoteDataSourceImpl(get(), get()) }
            scoped<TestDatabaseSource> { TestDatabaseSourceImpl(get()) }
            scoped<TestLocalPref> { TestLocalPrefImpl(get()) }
            scoped<TestParser> { TestParserImpl() }
            scoped<TestRepository> { TestRepositoryImpl(get(), get(), get()) }
            scoped<TestUsecase> { TestUsecaseImpl(get()) }
            scoped { TestViewModel(get(), get()) }
            scoped<TestMainPage> { TestMainPageImpl() }
        }
    }

    return listOf(testUI, module)
}

