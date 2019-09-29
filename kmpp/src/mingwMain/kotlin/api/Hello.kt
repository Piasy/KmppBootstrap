package com.piasy.kmpp.api

/**
 * Created by Piasy{github.com/Piasy} on 2019/9/27.
 */
actual class Hello {
    actual fun sayHello(info: String): String {
        return "Hello from Windows: $info"
    }
}
