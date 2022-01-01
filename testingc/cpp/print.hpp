// Multi-platform portable PRINT macro
// Use this to log

#ifndef MYAPP_PRINT_HPP
#define MYAPP_PRINT_HPP

#include <cstdio>

#define print(...) {printf(__VA_ARGS__); puts("");}

#endif //MYAPP_PRINT_HPP
