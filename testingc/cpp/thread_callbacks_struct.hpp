//
//  thread_callbacks_struct.h
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 15/02/22.
//

#ifndef thread_callbacks_struct_hpp
#define thread_callbacks_struct_hpp

struct SomeCLibCallbacks {
  void (*onThreadStarted)();
};

typedef struct SomeCLibCallbacks SomeCLibCallbacks;

#endif /* thread_callbacks_struct_hpp */
