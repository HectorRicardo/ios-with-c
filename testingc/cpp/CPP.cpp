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
#include "thread_callbacks_struct.hpp"

void SomeCLibSetup(const ThreadCallbacksStruct *callbacks) {
    callbacks->onThreadStarted();
}

void start_thread_wrapper(void (*onThreadStartedFunction)()) {
  std::thread([onThreadStartedFunction] {
    IOSThreadExecutionCallbacks callbacks(onThreadStartedFunction);
    threadBody(callbacks);
  }).detach();
}
