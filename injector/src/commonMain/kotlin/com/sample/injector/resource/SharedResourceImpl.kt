package com.sample.injector.resource

import com.sample.common_api.SharedResourceApi
import com.syedsamarulhuda.kmm.injector.generated.resources.Res
import com.syedsamarulhuda.kmm.injector.generated.resources.headphone
import com.syedsamarulhuda.kmm.injector.generated.resources.test


object SharedResourceImpl : SharedResourceApi {

    override val headphoneSvg = Res.drawable.headphone

    override val test = Res.drawable.test
}