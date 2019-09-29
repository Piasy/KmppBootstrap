package com.piasy.kmpp

import com.piasy.kmpp.api.Hello
import com.piasy.kmpp.data.Person
import kotlinx.cinterop.toKString

/**
 * Created by Piasy{github.com/Piasy} on 2019/9/27.
 */
class KmppBootstrap(person: Person) : KmppBootstrapShared(person, Hello())

fun sayHello(kmpp: KmppBootstrap): String {
    val superHello = kmpp.sayHello()
    val dummyInfo = dummy.dummy_get_str()?.toKString()
    return "$superHello, $dummyInfo"
}
