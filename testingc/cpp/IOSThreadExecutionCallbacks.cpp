//
//  IOSThreadExecutionCallbacks.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#include "IOSThreadExecutionCallbacks.hpp"
#include "thread_callbacks_struct.hpp"

IOSThreadExecutionCallbacks::IOSThreadExecutionCallbacks(
  const ThreadCallbacksStruct& threadCallbacks) :
    threadCallbacks(threadCallbacks) {}

void IOSThreadExecutionCallbacks::onThreadStarted() const {
  threadCallbacks.onThreadStarted();
}
