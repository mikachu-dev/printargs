// #include <filesystem> // C++17
#include <direct.h>

#include "program.hpp"

static
std::string getWorkingDir()
{
    const size_t size = 1024;
    char path[size] = {0};

    if (getcwd(path, size) != nullptr)
    {
        return std::string(path);
    }
    else
    {
        return "";
    }
}

void
Program::run(std::string path,
             std::vector<std::string> list)
{
    std::cout << getWorkingDir() << std::endl;
    // std::cout << std::filesystem::current_path() << std::endl // C++17
    std::cout << "path: " << path << std::endl
              << "arguments:" << std::endl;

    int i = 1;

    for (auto& item: list)
    {
        std::cout << "  " << i << ": " << item << std::endl;
        i++;
}
}
