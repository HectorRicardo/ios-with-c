#include <thread>
#include <chrono>
#include "thread_logic.hpp"
#include "print.hpp"

static void thread_body(int n) {
  using namespace std::chrono_literals;
  print("Starting...");
  for (int i = 0; i < n; i++) {
    std::this_thread::sleep_for(2000ms);
    print("Working %d", i);
  }
  print("Done");
}

void start_thread() {
  std::thread thr(thread_body, 5);
  thr.detach();
}
