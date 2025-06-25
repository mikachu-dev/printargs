#include <windows.h>
#include <thread>
#include <chrono>
#include <iostream>
#include <tuple>
#include <cstdlib>
#include <cstdio>

#include "program.hpp"
#include "arguments.hpp"

int
main(int argc,
     char** argv)
{
    Arguments args(argc, argv);

    args.parse();

    if (args.count > 0)
    {
    Program program;

        program.run(args.path, args.list);
}
    
    char c = std::getchar();

    return EXIT_SUCCESS;
}
