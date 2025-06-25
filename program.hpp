#ifndef _PROGRAM_HPP_
#define _PROGRAM_HPP_

#include <thread>
#include <chrono>
#include <iostream>
#include <tuple>

#include "arguments.hpp"

class Program
{
public:
    void run(const Arguments&);
};

#endif /* _PROGRAM_HPP_ */
