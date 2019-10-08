package com.piasy.kmpp.api

import kotlin.native.concurrent.TransferMode.SAFE
import kotlin.native.concurrent.Worker
import kotlin.native.concurrent.freeze


/**
 * Created by Piasy{github.com/Piasy} on 2019/9/30.
 */
actual class TaskQueue() {
    private val worker = Worker.start()

    actual fun post(task: () -> Unit) {
        worker.execute(SAFE, { task.freeze() }) { t -> t() }
        /*val t = task.freeze()
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0)) {
            t()
        }*/
    }
}
