package com.piasy.kmpp.api

/**
 * Created by Piasy{github.com/Piasy} on 2019/9/30.
 */
expect class TaskQueue {
    fun post(task: () -> Unit)
}
