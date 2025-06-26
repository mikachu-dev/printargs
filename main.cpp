#include <windows.h>
#include <thread>
#include <chrono>
#include <iostream>
#include <tuple>
#include <cstdlib>
#include <cstdio>
#include <conio.h>

#include "program.hpp"
#include "arguments.hpp"

int
main(int argc,
     char** argv)
{
    Arguments args(argc, argv);

    args.parse();

    Program program(args);

    program.printInfo();

    if (args.count > 0)
    {
        program.printArgs();
    }

    char c = getch();

    return EXIT_SUCCESS;
}
