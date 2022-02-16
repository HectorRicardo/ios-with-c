//
//  ViewController.swift
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 31/12/21.
//

import UIKit

var threadCallbacks = ThreadCallbacksStruct(
    onThreadStarted: { print("Swift thread started") }
)

class ViewController: UIViewController {
    
    @IBOutlet weak var myLabel2: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        myLabel2.text = "Hello normal"
        myLabel2.sizeToFit()

        // Calling C++
        start_thread_wrapper(&threadCallbacks)
    }
}
