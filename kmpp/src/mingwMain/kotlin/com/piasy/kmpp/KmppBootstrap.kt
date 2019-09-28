package com.piasy.kmpp

import com.piasy.kmpp.api.Hello
import com.piasy.kmpp.data.Person

/**
 * Created by Piasy{github.com/Piasy} on 2019/9/27.
 */
class KmppBootstrap(person: Person) : KmppBootstrapShared(person, Hello())

fun sayHello(kmpp: KmppBootstrap): String {
    return kmpp.sayHello()
}