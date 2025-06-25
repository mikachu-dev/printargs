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
    wchar_t** argv;

    std::vector<std::wstring> list;

public:

public:
    Arguments(int argc, wchar_t** argv);
    void parse();
};

#endif /* _ARGUMENTS_HPP_ */
