//
//  logic.hpp
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 31/12/21.
//

#ifndef CPP_hpp
#define CPP_hpp

#ifdef __cplusplus
extern "C" {
#endif

void start_thread_wrapper(void (*onThreadStartedFunction)());

#ifdef __cplusplus
}
#endif

#endif /* CPP_hpp */
