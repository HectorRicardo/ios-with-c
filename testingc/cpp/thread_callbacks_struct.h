//
//  thread_callbacks_struct.h
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 15/02/22.
//

#ifndef thread_callbacks_struct_h
#define thread_callbacks_struct_h

struct ThreadCallbacksStruct {
  void (*onThreadStarted)(void);
  void (*onIterationComplete)(int iteration);
  void (*onThreadFinished)(void);
};

typedef struct ThreadCallbacksStruct ThreadCallbacksStruct;

#endif /* thread_callbacks_struct_h */
