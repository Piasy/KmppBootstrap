package com.piasy.kmpp.api

/**
 * Created by Piasy{github.com/Piasy} on 2019/10/7.
 */
actual class Logger {
    actual fun info(tag: String, content: String) {
        println("$tag: $content")
    }
}
