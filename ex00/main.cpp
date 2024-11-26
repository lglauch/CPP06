#include "ScalarConverter.hpp"

int main(void)
{

	std::string msg1 = "123.45";
    std::cout << "Testing with input: " << msg1 << std::endl;
    ScalarConverter::convert(msg1);
    std::cout << std::endl;

    std::string msg2 = "42";
    std::cout << "Testing with input: " << msg2 << std::endl;
    ScalarConverter::convert(msg2);
    std::cout << std::endl;

    std::string msg3 = "a";
    std::cout << "Testing with input: " << msg3 << std::endl;
    ScalarConverter::convert(msg3);
    std::cout << std::endl;

    std::string msg4 = "-inff";
    std::cout << "Testing with input: " << msg4 << std::endl;
    ScalarConverter::convert(msg4);
    std::cout << std::endl;

    std::string msg5 = "+inf";
    std::cout << "Testing with input: " << msg5 << std::endl;
    ScalarConverter::convert(msg5);
    std::cout << std::endl;

    std::string msg6 = "nan";
    std::cout << "Testing with input: " << msg6 << std::endl;
    ScalarConverter::convert(msg6);
    std::cout << std::endl;

    std::string msg7 = "non-numeric";
    std::cout << "Testing with input: " << msg7 << std::endl;
    ScalarConverter::convert(msg7);
    std::cout << std::endl;

    return 0;
}