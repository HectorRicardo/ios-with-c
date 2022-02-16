//
//  CPP.h
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 31/12/21.
//

#ifndef CPP_h
#define CPP_h

#include "thread_callbacks_struct.h"

#ifdef __cplusplus
extern "C" {
#endif

void start_thread_wrapper(const ThreadCallbacksStruct *);

#ifdef __cplusplus
}
#endif

#endif /* CPP_h */
