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

void SomeCLibSetup(const SomeCLibCallbacks *callbacks) {
    callbacks->onThreadStarted();
}

void start_thread_wrapper(void (*onThreadStartedFunction)()) {
  std::thread([onThreadStartedFunction] {
    IOSThreadExecutionCallbacks callbacks(onThreadStartedFunction);
    threadBody(callbacks);
  }).detach();
}
