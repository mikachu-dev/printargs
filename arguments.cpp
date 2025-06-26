#include <string>
// #include <filesystem> // C++17
#include <direct.h>

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

    const size_t size = 1024;
    std::string path(size, '\0');

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
