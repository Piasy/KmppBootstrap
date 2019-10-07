package com.piasy.kmpp.api

import kotlin.native.concurrent.TransferMode.SAFE
import kotlin.native.concurrent.Worker


/**
 * Created by Piasy{github.com/Piasy} on 2019/9/30.
 */
actual class TaskQueue() {
    private val worker = Worker.start()

    actual fun post(task: () -> Unit) {
        worker.execute(SAFE, { task }) { t -> t() }
    }
}
