#include "program.hpp"

void
Program::printInfo()
{
    std::cout << "dir\t" << args.pwd << std::endl
              << "path\t" << args.path << std::endl;
}

void
Program::printArgs()
{
    std::cout << "count\t" << args.list.size() << std::endl;
    std::cout << "arguments" << std::endl;

    int i = 1;

    for (auto& item: args.list)
    {
        std::cout << i << "\t" << item << std::endl;
        i++;
    }
}

Program::Program(Arguments args) :
    args(args)
{
}
