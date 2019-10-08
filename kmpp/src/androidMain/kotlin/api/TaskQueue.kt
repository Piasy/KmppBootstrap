package com.piasy.kmpp.api

import java.util.concurrent.Executors


/**
 * Created by Piasy{github.com/Piasy} on 2019/9/30.
 */
actual class TaskQueue() {
    private val executor = Executors.newSingleThreadExecutor()

    actual fun post(task: () -> Unit) {
        executor.execute(task)
    }
}
