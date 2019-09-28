package com.piasy.kmpp

import com.piasy.kmpp.api.Hello
import com.piasy.kmpp.data.Person
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration

/**
 * Created by Piasy{github.com/Piasy} on 2019-02-16.
 */
abstract class KmppBootstrapShared(private val person: Person, private val hello: Hello) {

    fun sayHello(): String {
        val json = Json(JsonConfiguration.Stable)
        val info = json.stringify(Person.serializer(), person)
        return hello.sayHello(info)
    }
}