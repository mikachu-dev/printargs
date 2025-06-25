#include <windows.h>
#include <thread>
#include <chrono>
#include <iostream>
#include <tuple>

#include "program.hpp"
#include "arguments.hpp"

int
main(int argc,
     wchar_t** argv)
{
    Arguments args(argc, argv);

    args.parse();

    Program program;
    program.run(args);

    return 0;
}
