#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    if (!argv[1] || argv[2])
    {
        std::cout << "Please enter valid input - ./convert [value]" << std::endl;
        return(1);
    }
    ScalarConverter::convert(argv[1]);

    return 0;
}