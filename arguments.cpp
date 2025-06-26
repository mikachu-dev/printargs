#if defined(_WIN32) || defined(_WIN64) || defined(__WINDOWS__)
#   define _LOSER_
#else
#   undef _LOSER_
#endif

#include <stdio.h> // FILENAME_MAX
#include <string>
// #include <filesystem> // C++17
#ifdef _LOSER_
#include <direct.h>
#else
#   include <unistd.h>
#endif

#include "arguments.hpp"

Arguments::Arguments(int count,
                     char** array) :
    argc(count - 1),
    argv(array),
    count(argc)
{
}

static
std::string getWorkingDir()
{
    // return std::filesystem::current_path(); // C++17

    std::string path(FILENAME_MAX, '\0');

    if (getcwd(&path[0], path.capacity()) != nullptr)
    {
        return std::string(path);
    }
    else
    {
        return "";
    }
}

void
Arguments::parse()
{
    pwd  = getWorkingDir();
    path = std::string(argv[0]);
    list = std::vector<std::string>(argv + 1, argv + argc + 1);
}
