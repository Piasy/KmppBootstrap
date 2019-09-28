//
//  ViewController.swift
//  macOSExample
//
//  Created by Piasy on 2019/9/28.
//  Copyright © 2019 Piasy. All rights reserved.
//

import Cocoa
import kmpp

class ViewController: NSViewController {

    //MARK: Properties
    @IBOutlet weak var label: NSTextField!

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }

    override var representedObject: Any? {
        didSet {
        // Update the view, if already loaded.
        }
    }

    //MARK: Actions
    @IBAction func onClick(_ sender: Any) {
        let kmpp = KmppBootstrap(person: Person(name: "Piasy", age: 26))
        label.stringValue = kmpp.sayHello()
    }

}

