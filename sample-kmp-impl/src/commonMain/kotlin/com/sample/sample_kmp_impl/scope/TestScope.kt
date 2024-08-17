package com.sample.sample_kmp_impl.scope

import org.koin.core.component.KoinScopeComponent
import org.koin.core.component.createScope
import org.koin.core.scope.Scope

class TestScope : KoinScopeComponent {
    override val scope: Scope by lazy { createScope(this) }

}