package com.piasy.kmpp.api

import kotlinx.cinterop.COpaquePointer


/**
 * Created by Piasy{github.com/Piasy} on 2019/9/30.
 */
actual class TaskQueue(private var queue: COpaquePointer?) {
    var destroyed = false

    actual fun post(task: () -> Unit) {
        if (destroyed) {
            return
        }
        // kotlinx.cinterop.staticCFunction must take an unbound, non-capturing function or lambda
        // webrtc_task_queue.WebRTCTaskQueuePost(queue, staticCFunction { -> task() })
    }

    actual fun destroy() {
        destroyed = true
        webrtc_task_queue.WebRTCTaskQueueDestroy(queue)
        queue = null
    }

}

actual class TaskQueueFactory {
    private var factory: COpaquePointer? = webrtc_task_queue.WebRTCTaskQueueFactoryCreate()
    private var destroyed = false

    actual fun create(
        name: String,
        highPriority: Boolean
    ): TaskQueue? {
        if (destroyed) {
            return null
        }

        return TaskQueue(
            webrtc_task_queue.WebRTCTaskQueueCreate(
                factory,
                name,
                if (highPriority) 1 else 0
            )
        )
    }

    actual fun destroy() {
        destroyed = true
        webrtc_task_queue.WebRTCTaskQueueFactoryDestroy(factory)
        factory = null
    }

}
