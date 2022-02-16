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

void start_thread_wrapper(const ThreadCallbacksStruct *callbacksStruct) {
  std::thread([callbacksStruct] {
    IOSThreadExecutionCallbacks callbacks(callbacksStruct);
    threadBody(callbacks);
  }).detach();
}
