package com.piasy.kmpp.api

import platform.Foundation.NSLog
import platform.Foundation.NSThread

/**
 * Created by Piasy{github.com/Piasy} on 2019/10/7.
 */
actual class Logger {
    actual fun info(tag: String, content: String) {
        NSLog("$tag: $content @ ${NSThread.currentThread.description}")
    }
}
