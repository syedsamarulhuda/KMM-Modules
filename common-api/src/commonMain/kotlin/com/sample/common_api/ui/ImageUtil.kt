package com.sample.common_api.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.FilterQuality
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.layout.ContentScale
import coil3.compose.AsyncImage

@Composable
fun LoadImageNetwork(
    imageUrl: String?,
    modifier: Modifier = Modifier,
    contentScale: ContentScale = ContentScale.Crop,
    contentDescription: String? = null,
    placeholder: Painter? = null,
) {
    if (imageUrl == null && placeholder == null) return
    AsyncImage(
        model = imageUrl,
        contentDescription = contentDescription,
      /*  imageLoader = ImageLoader.Builder(LocalPlatformContext.current)
            .components {
                add(SvgDecoder.Factory())
            },*/
        modifier = modifier,
        contentScale = contentScale,
        colorFilter = null,
        filterQuality = FilterQuality.High,
        clipToBounds = true,
        alignment = Alignment.Center
    )
}
