package com.piasy.kmpp.api

/**
 * Created by Piasy{github.com/Piasy} on 2019-02-16.
 */
actual class Hello() {
    actual fun sayHello(info: String): String {
        return "Hello from Android: $info, ${Thread.currentThread().name}"
    }
}
