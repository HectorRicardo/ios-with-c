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

void SomeCLibSetup(const SomeCLibCallbacks * callbacks) {
    callbacks->printGreeting();
}

void start_thread_wrapper(void (*onThreadStartedFunction)()) {
  std::thread([onThreadStartedFunction] {
    IOSThreadExecutionCallbacks callbacks(onThreadStartedFunction);
    threadBody(callbacks);
  }).detach();
}
