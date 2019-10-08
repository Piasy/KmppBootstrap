package com.piasy.kmpp

import com.piasy.kmpp.api.Logger
import com.piasy.kmpp.api.Platform
import com.piasy.kmpp.api.TaskQueue

/**
 * Created by Piasy{github.com/Piasy} on 2019-02-16.
 */
class KmppBootstrap : KmppBootstrapShared(Platform(), TaskQueue(), Logger())
