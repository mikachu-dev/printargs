#include "program.hpp"

void
Program::printInfo()
    {
    std::cout << "working directory: " << args.pwd << std::endl
              << "path: " << args.path << std::endl;
}

void
Program::printArgs()
{
    std::cout << "arguments:" << std::endl;

    int i = 1;

    for (auto& item: args.list)
    {
        std::cout << "  " << i << ": " << item << std::endl;
        i++;
}
}

Program::Program(Arguments args) :
    args(args)
{
}
