//
//  IOSThreadExecutionCallbacks.hpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#ifndef ios_thread_callbacks_hpp
#define ios_thread_callbacks_hpp

#include "thread_callbacks_struct.h"
#include "thread_callbacks.hpp"

class IosThreadCallbacks : public ThreadCallbacks {
 public:
  IosThreadCallbacks(const ThreadCallbacksStruct&);
  void onThreadStarted() const override;
  void onIterationComplete(int iteration) const override;
  void onThreadFinished() const override;
 private:
  const ThreadCallbacksStruct& callbacks;
};

#endif /* ios_thread_callbacks_hpp */
