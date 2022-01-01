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
        let cppWrapper = CPPWrapper()
        myLabel2.text = "Hello normal"
        myLabel2.sizeToFit()
        cppWrapper.start_thread()
        // Do any additional setup after loading the view.
        
    }


}

