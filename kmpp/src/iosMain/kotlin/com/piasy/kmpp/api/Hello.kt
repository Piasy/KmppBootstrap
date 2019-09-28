package com.piasy.kmpp.api

import platform.Foundation.NSThread

/**
 * Created by Piasy{github.com/Piasy} on 2019-02-16.
 */
actual class Hello() {
    actual fun sayHello(info: String): String {
        return "Hello from iOS: $info, ${NSThread.currentThread.debugDescription}"
    }
}
