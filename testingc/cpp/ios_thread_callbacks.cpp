//
//  IOSThreadExecutionCallbacks.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#include "ios_thread_callbacks.hpp"
#include "thread_callbacks_struct.h"

IosThreadCallbacks::IosThreadCallbacks(
  const ThreadCallbacksStruct& threadCallbacks) :
    threadCallbacks(threadCallbacks) {}

void IosThreadCallbacks::onThreadStarted() const {
  threadCallbacks.onThreadStarted();
}

void IosThreadCallbacks::onIterationComplete(int iteration) const {
    threadCallbacks.onThreadStarted();
}

void IosThreadCallbacks::onThreadFinished() const {
    threadCallbacks.onThreadStarted();
}
