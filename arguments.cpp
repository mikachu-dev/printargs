#include "arguments.hpp"

Arguments::Arguments(int count,
                     char** array) :
    argc(count - 1),
    argv(array),
    count(argc)
{
}

void
Arguments::parse()
{
    path = std::string(argv[0]);
    list = std::vector<std::string>(argv + 1, argv + argc + 1);
}
