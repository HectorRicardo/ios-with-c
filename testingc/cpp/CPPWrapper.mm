//
//  CPPWrapper.m
//  testingc
//
//  Created by Hector Ricardo Mendez Sordia on 31/12/21.
//

#import <Foundation/Foundation.h>
#import "CPPWrapper.h"
#import "CPP.hpp"

@implementation CPPWrapper

CPP cpp;

- (NSString*) sayHello {
    std::string helloWorldMessage = cpp.sayHello();
    return [NSString stringWithCString:helloWorldMessage.c_str() encoding:NSUTF8StringEncoding];
}

- (void) start_thread {
    cpp.start_thread_wrapper();
}

@end
