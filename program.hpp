#ifndef _PROGRAM_HPP_
#define _PROGRAM_HPP_

#include <thread>
#include <chrono>
#include <iostream>
#include <tuple>
#include <string>
#include <vector>

#include "arguments.hpp"

class Program
{
private:
    Arguments args;
public:
    Program(Arguments);
    void printInfo();
    void printArgs();
};

#endif /* _PROGRAM_HPP_ */
