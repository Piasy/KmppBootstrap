package com.piasy.kmpp

import com.piasy.kmpp.api.Logger
import com.piasy.kmpp.api.Platform
import com.piasy.kmpp.api.TaskQueue
import com.piasy.kmpp.data.Person

/**
 * Created by Piasy{github.com/Piasy} on 2019/9/27.
 */
class KmppBootstrap() : KmppBootstrapShared(Platform(), TaskQueue(), Logger())

fun sayHello(kmpp: KmppBootstrap, person: Person): String {
    val superHello = kmpp.sayHello(person)
    val dummyInfo = dummy.dummy_get_str()?.toKString()
    return "$superHello, $dummyInfo"
}

fun sayHello2(kmpp: KmppBootstrap, person: Person) {
    kmpp.sayHello2(person)
}
