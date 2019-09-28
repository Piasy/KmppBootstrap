package com.piasy.kmpp.data

import kotlinx.serialization.Serializable

/**
 * Created by Piasy{github.com/Piasy} on 2019-02-16.
 */
@Serializable
data class Person(
        val name: String,
        val age: Int
)
