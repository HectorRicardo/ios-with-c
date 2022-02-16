//
//  IOSThreadExecutionCallbacks.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#include "IOSThreadExecutionCallbacks.hpp"

IOSThreadExecutionCallbacks::IOSThreadExecutionCallbacks(
  void (*onThreadStartedFunction)()) : onThreadStartedFunction(onThreadStartedFunction) {}

void IOSThreadExecutionCallbacks::onThreadStarted() const {
  onThreadStartedFunction();
}
