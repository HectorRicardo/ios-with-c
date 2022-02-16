//
//  IOSThreadExecutionCallbacks.hpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#ifndef IOSThreadExecutionCallbacks_hpp
#define IOSThreadExecutionCallbacks_hpp

#include "ThreadExecutionCallbacks.hpp"
#include "thread_callbacks_struct.h"

class IOSThreadExecutionCallbacks : public ThreadExecutionCallbacks {
 public:
  IOSThreadExecutionCallbacks(const ThreadCallbacksStruct&);
  void onThreadStarted() const override;
 private:
  const ThreadCallbacksStruct& threadCallbacks;
};

#endif /* IOSThreadExecutionCallbacks_hpp */
