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
        // memory will drop back when using gcd
        // dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), task.freeze())
    }
}
