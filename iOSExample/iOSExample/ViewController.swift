//
//  ViewController.swift
//  iosApp
//
//  Created by jetbrains on 12/04/2018.
//  Copyright © 2018 JetBrains. All rights reserved.
//

import UIKit
import kmpp

class ViewController: UIViewController {

    //MARK: Properties
    @IBOutlet weak var label: UILabel!

    let kmpp = KmppBootstrap()

    override func viewDidLoad() {
        super.viewDidLoad()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    //MARK: Actions
    @IBAction func hello(_ sender: Any) {
        label.text = kmpp.sayHello(person: Person(name: "Piasy", age: 26))
    }
}

