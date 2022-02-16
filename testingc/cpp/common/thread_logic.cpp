//
// Created by hecto on 1/4/2022.
//

#include "thread_logic.hpp"

#include <thread>
#include <chrono>
#include "thread_callbacks.hpp"

void thread_logic(const ThreadCallbacks& callbacks) {
    callbacks.onThreadStarted();
    for (int i = 0; i < 5; i++) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        callbacks.onIterationComplete(i);
    }
    callbacks.onThreadFinished();
}
