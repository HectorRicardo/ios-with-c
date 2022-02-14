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

void start_thread_wrapper() {
  std::thread([] {
    IOSThreadExecutionCallbacks callbacks{};
    threadBody(callbacks);
  }).detach();
}
