package com.piasy.kmpp.api

import kotlin.native.concurrent.Worker
import kotlin.native.concurrent.freeze


/**
 * Created by Piasy{github.com/Piasy} on 2019/9/30.
 */
actual class TaskQueue {
    private val worker = Worker.start()

    actual fun post(task: () -> Unit) {
        worker.executeAfter(0, task.freeze())
    }
}
