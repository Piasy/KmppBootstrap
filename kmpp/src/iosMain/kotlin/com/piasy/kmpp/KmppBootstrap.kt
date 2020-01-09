package com.piasy.kmpp

import Dummy.IOSDummyObj
import platform.Foundation.NSLog

/**
 * Created by Piasy{github.com/Piasy} on 2019-02-16.
 */
class KmppBootstrap {
  fun test(dummy: IOSDummyObj) {
    NSLog("test with dummy ${dummy.getValue()}")
  }
}
