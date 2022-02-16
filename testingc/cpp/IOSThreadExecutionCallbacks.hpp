//
//  IOSThreadExecutionCallbacks.h
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#ifndef IOSThreadExecutionCallbacks_h
#define IOSThreadExecutionCallbacks_h

#include "ThreadExecutionCallbacks.hpp"
#include "thread_callbacks_struct.hpp"

class IOSThreadExecutionCallbacks : public ThreadExecutionCallbacks {
 public:
  IOSThreadExecutionCallbacks(const ThreadCallbacksStruct *);
  void onThreadStarted() const override;
 private:
  const ThreadCallbacksStruct *threadCallbacks;
};

#endif /* IOSThreadExecutionCallbacks_h */
