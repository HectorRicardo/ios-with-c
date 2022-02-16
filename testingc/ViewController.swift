//
//  ViewController.swift
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 31/12/21.
//

import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var myLabel2: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        myLabel2.text = "Hello normal"
        myLabel2.sizeToFit()
        
        var callbacks = SomeCLibCallbacks(
            onThreadStarted: {
                print("Hello froms wift")
            }
        )
        SomeCLibSetup(&callbacks)

        // Calling C++
        start_thread_wrapper(callbacks.onThreadStarted)
    }
}
