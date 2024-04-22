#include "ScalarConverter.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Usage: "<< argv[0] << " <string literal to convert>" << std::endl;
    else
        ScalarConverter::convert(static_cast<std::string>(argv[1]));
    return 0;
}