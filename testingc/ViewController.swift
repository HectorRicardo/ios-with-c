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
        myLabel2.text = CPPWrapper().sayHello()
        myLabel2.sizeToFit()
        // Do any additional setup after loading the view.
        
    }


}

