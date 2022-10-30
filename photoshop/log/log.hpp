#ifndef LOG_HPP
#define LOG_HPP

#include <stdio.h>
#include <iostream>

#define $ fprintf(stderr, "here on %d line\n", __LINE__);


template <typename T>
void logPrintVar(T var)
{
    std::cout << "Var = " << var << "on line = " << __LINE__ << std::endl;
}

#endif