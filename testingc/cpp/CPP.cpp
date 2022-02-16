//
//  logic.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 31/12/21.
//

#include <thread>
#include "CPP.hpp"
#include "thread_logic.hpp"
#include "IOSThreadExecutionCallbacks.hpp"
#include "print.hpp"

void cppFunction() {
  print("Calling from C++ new")
}

void start_thread_wrapper() {
  std::thread([] {
    IOSThreadExecutionCallbacks callbacks(cppFunction);
    threadBody(callbacks);
  }).detach();
}
