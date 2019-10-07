package com.piasy.kmpp

import com.piasy.kmpp.api.Logger
import com.piasy.kmpp.api.Platform
import com.piasy.kmpp.api.TaskQueue
import com.piasy.kmpp.data.Person
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration

/**
 * Created by Piasy{github.com/Piasy} on 2019-02-16.
 */
abstract class KmppBootstrapShared(
    private val platform: Platform,
    private val taskQueue: TaskQueue,
    private val logger: Logger
) {
    private val json = Json(JsonConfiguration.Stable)

    open fun sayHello(person: Person) {
        val info = json.stringify(Person.serializer(), person)

        //return "Hello from ${platform.platform()}, $info"
        logger.info("Kmpp", info)
    }

    fun sayHello2(person: Person) {
        val info = json.stringify(Person.serializer(), person)
        taskQueue.post { logger.info("Kmpp", info) }
    }
}
