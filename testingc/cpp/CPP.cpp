//
//  logic.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 31/12/21.
//

#include "CPP.h"

#include <thread>
#include "thread_callbacks_struct.h"
#include "thread_logic.hpp"
#include "ios_thread_callbacks.hpp"

void start_thread_wrapper(const ThreadCallbacksStruct *callbacksStruct) {
  std::thread([callbacksStruct] {
    IosThreadCallbacks callbacks(*callbacksStruct);
    thread_logic(callbacks);
  }).detach();
}
