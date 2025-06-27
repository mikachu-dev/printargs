#include <iostream>
#include <cstdlib>
#include <cstdio>

#include "termio.hpp"
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
