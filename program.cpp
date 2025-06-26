#include "program.hpp"

void
Program::run(Arguments& args)
    {
    std::cout << "working directory: " << args.pwd << std::endl
              << "path: " << args.path << std::endl
              << "arguments:" << std::endl;

    int i = 1;

    for (auto& item: args.list)
    {
        std::cout << "  " << i << ": " << item << std::endl;
        i++;
}
}
