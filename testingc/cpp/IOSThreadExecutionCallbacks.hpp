//
//  IOSThreadExecutionCallbacks.h
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 14/02/22.
//

#ifndef IOSThreadExecutionCallbacks_h
#define IOSThreadExecutionCallbacks_h

#include "ThreadExecutionCallbacks.hpp"

class IOSThreadExecutionCallbacks : public ThreadExecutionCallbacks {
 public:
  void onThreadStarted() const override;
};


#endif /* IOSThreadExecutionCallbacks_h */
