#include "arguments.hpp"

Arguments::Arguments(int argc,
                     char** argv) :
    argc(argc),
    argv(argv)
{
}

void
Arguments::parse()
{
    list = std::vector<std::string>(argv + 1, argv + argc);

    for (auto& item: list)
    {
        // std::wcout << item << std::endl;
}

    for (int i = 1; i < argc; i++)
    {
        std::string s(argv[i]);

        std::cout << i << " : " << s << std::endl;
    }
}

