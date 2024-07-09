@file:OptIn(org.jetbrains.compose.resources.InternalResourceApi::class)

package com.sample.kmm.injector.generated.resources

import kotlin.OptIn
import org.jetbrains.compose.resources.DrawableResource

private object CommonMainDrawable0 {
  public val headphone: DrawableResource by 
      lazy { init_headphone() }

  public val test: DrawableResource by 
      lazy { init_test() }
}

internal val Res.drawable.headphone: DrawableResource
  get() = CommonMainDrawable0.headphone

private fun init_headphone(): DrawableResource = org.jetbrains.compose.resources.DrawableResource(
  "drawable:headphone",
    setOf(
      org.jetbrains.compose.resources.ResourceItem(setOf(), "drawable/headphone.svg", -1, -1),
    )
)

internal val Res.drawable.test: DrawableResource
  get() = CommonMainDrawable0.test

private fun init_test(): DrawableResource = org.jetbrains.compose.resources.DrawableResource(
  "drawable:test",
    setOf(
      org.jetbrains.compose.resources.ResourceItem(setOf(), "drawable/test.webp", -1, -1),
    )
)
