//
//  IOSThreadExecutionCallbacks.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#include "ios_thread_callbacks.hpp"
#include "thread_callbacks_struct.h"

IosThreadCallbacks::IosThreadCallbacks(const ThreadCallbacksStruct& callbacks)
  : callbacks(callbacks) {}

void IosThreadCallbacks::onThreadStarted() const {
  callbacks.onThreadStarted();
}

void IosThreadCallbacks::onIterationComplete(int iteration) const {
  callbacks.onIterationComplete();
}

void IosThreadCallbacks::onThreadFinished() const {
  callbacks.onThreadFinished();
}
