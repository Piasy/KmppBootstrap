package com.piasy.kmpp.example

import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import com.piasy.kmpp.KmppBootstrap
import com.piasy.kmpp.data.Person

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val piasy = Person("Piasy", 26)
        val kmpp = KmppBootstrap()
        val hello = findViewById<Button>(R.id.hello)
        val label = findViewById<TextView>(R.id.label)
        //hello.setOnClickListener { label.text = kmpp.sayHello(piasy) }
    }
}