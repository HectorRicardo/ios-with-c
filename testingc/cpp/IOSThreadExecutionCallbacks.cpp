//
//  IOSThreadExecutionCallbacks.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#include "IOSThreadExecutionCallbacks.hpp"
#include "print.hpp"

void IOSThreadExecutionCallbacks::onThreadStarted() const {
  print("HELLO I AM GOOD");
}
