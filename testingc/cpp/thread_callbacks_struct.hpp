//
//  thread_callbacks_struct.hpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 15/02/22.
//

#ifndef thread_callbacks_struct_hpp
#define thread_callbacks_struct_hpp

struct ThreadCallbacksStruct {
  void (*onThreadStarted)();
};

typedef struct ThreadCallbacksStruct ThreadCallbacksStruct;

#endif /* thread_callbacks_struct_hpp */
