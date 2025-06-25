#ifndef _ARGUMENTS_HPP_
#define _ARGUMENTS_HPP_

#include <thread>
#include <chrono>
#include <iostream>
#include <tuple>
#include <vector>
#include <string>

class Arguments
{
private:
    int argc;
    char** argv;

    std::vector<std::string> list;

public:

public:
    Arguments(int argc, char** argv);
    void parse();
};

#endif /* _ARGUMENTS_HPP_ */
