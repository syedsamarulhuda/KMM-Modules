package com.sample.injector.resource

import com.sample.common_api.SharedResourceApi
import com.sample.kmm.injector.generated.resources.Res
import com.sample.kmm.injector.generated.resources.headphone
import com.sample.kmm.injector.generated.resources.test


object SharedResourceImpl : SharedResourceApi {

    override val headphoneSvg = Res.drawable.headphone

    override val test = Res.drawable.test
}