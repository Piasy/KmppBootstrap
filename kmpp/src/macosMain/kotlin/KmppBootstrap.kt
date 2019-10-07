package com.piasy.kmpp

import com.piasy.kmpp.api.Logger
import com.piasy.kmpp.api.Platform
import com.piasy.kmpp.api.TaskQueue

/**
 * Created by Piasy{github.com/Piasy} on 2019/9/27.
 */
class KmppBootstrap() : KmppBootstrapShared(Platform(), TaskQueue(), Logger()) /*{
    override fun sayHello(): String {
        val superHello = super.sayHello()
        val dummyInfo = dummy.dummy_get_str()?.toKString()
        return "$superHello, $dummyInfo"
    }
}*/
