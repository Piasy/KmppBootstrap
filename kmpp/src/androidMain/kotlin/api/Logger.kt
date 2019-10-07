package com.piasy.kmpp.api

import android.util.Log

/**
 * Created by Piasy{github.com/Piasy} on 2019/10/7.
 */
actual class Logger {
    actual fun info(tag: String, content: String) {
        Log.i(tag, "$content @ ${Thread.currentThread().name}")
    }
}
