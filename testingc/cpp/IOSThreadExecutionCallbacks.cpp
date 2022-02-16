//
//  IOSThreadExecutionCallbacks.cpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#include "IOSThreadExecutionCallbacks.hpp"
#include "print.hpp"

void cppFunction() {
  print("Calling from C++")
}

void IOSThreadExecutionCallbacks::onThreadStarted() const {
  void (*theFunction)() = cppFunction;
  theFunction();
}
