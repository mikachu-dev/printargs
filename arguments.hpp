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

public:
    std::vector<std::string> list;
    std::string path;
    std::string pwd;
    const int& count;

public:
    Arguments(int, char**);
    void parse();
};

#endif /* _ARGUMENTS_HPP_ */
