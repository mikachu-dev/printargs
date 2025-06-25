#include "program.hpp"

void
Program::run(std::string path,
             std::vector<std::string> list)
{
    std::cout << "path: " << path << std::endl
              << "arguments:" << std::endl;

    int i = 1;

    for (auto& item: list)
    {
        std::cout << "  " << i << ": " << item << std::endl;
        i++;
}
}
