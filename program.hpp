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
public:
    void run(Arguments&);
};

#endif /* _PROGRAM_HPP_ */
