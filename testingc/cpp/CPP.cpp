//
//  logic.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 31/12/21.
//

#include "CPP.hpp"
#include <string>
#include "thread_logic.hpp"

std::string CPP::sayHello() {
    return "Hello from CPP World";
}

void CPP::start_thread_wrapper() {
    start_thread();
}
