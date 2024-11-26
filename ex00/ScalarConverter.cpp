#include "ScalarConverter.hpp"
#include <string>

ScalarConverter::ScalarConverter(void)
{
	std::cout << GRAY << "ScalaConverter default constructor called" << RESET << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &old)
{
	(void)old;
	std::cout << GRAY << "ScalaConverter copy constructor called" << RESET << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &old)
{
	(void)old;
	std::cout << GRAY << "ScalaConverter default assignment operator called" << RESET << std::endl;
	return (*this);
}
ScalarConverter::~ScalarConverter(void)
{
	std::cout << GRAY << "ScalaConverter destructor called" << RESET << std::endl;
}

void ScalarConverter::convert(std::string x)
{
    if (x == "nan")
    {
        std::cout << PURPLE << "Int: impossible" << RESET << std::endl;
        std::cout << RED << "Double: nan" << RESET << std::endl;
        std::cout << BLUE << "Float: nan" << RESET << std::endl;
        std::cout << GREEN << "Char: Not displayable" << RESET << std::endl;
    }
    if (x == "+inf" || x == "inf" || x == "+inff")
    {
        std::cout << PURPLE << "Int: impossible" << RESET << std::endl;
        std::cout << RED << "Double: +inf" << RESET << std::endl;
        std::cout << BLUE << "Float: +inff" << RESET << std::endl;
        std::cout << GREEN << "Char: Not displayable" << RESET << std::endl;
    }
    if (x == "-inf" || x == "-inff")
    {
        std::cout << PURPLE << "Int: impossible" << RESET << std::endl;
        std::cout << RED << "Double: -inf" << RESET << std::endl;
        std::cout << BLUE << "Float: -inff" << RESET << std::endl;
        std::cout << GREEN << "Char: Not displayable" << RESET << std::endl;
    }
    try
    {
        int intValue = std::stoi(x);
        std::cout << PURPLE << "Input to Int: " << intValue << RESET << std::endl;

        char charValue = static_cast<char>(intValue);
        if (std::isprint(charValue))
            std::cout << "char: '" << charValue << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;

        float floatValue = static_cast<float>(intValue);
        std::cout << "float: " << floatValue << "f" << std::endl;

        double doubleValue = static_cast<double>(intValue);
        std::cout << "double: " << doubleValue << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << PURPLE << "Input to Int: Invalid argument: " << e.what() << std::endl;
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << PURPLE << "Input to Int: Out of range: " << e.what() << std::endl;
    }

    try
    {
        double doubleValue = std::stod(x);
        std::cout << RED << "Input to Double: " << doubleValue << RESET << std::endl;

        char charValue = static_cast<char>(doubleValue);
        if (std::isprint(charValue))
            std::cout << "char: '" << charValue << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;

        int intValue = static_cast<int>(doubleValue);
        std::cout << "int: " << intValue << std::endl;

        float floatValue = static_cast<float>(doubleValue);
        std::cout << "float: " << floatValue << "f" << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << RED << "Input to Double: Invalid argument: " << e.what() << std::endl;
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << RED << "Input to Double: Out of range: " << e.what() << std::endl;
    }

    try
    {
        float floatValue = std::stof(x);
        std::cout << BLUE << "Input to Float: " << floatValue << RESET << std::endl;

        char charValue = static_cast<char>(floatValue);
        if (std::isprint(charValue))
            std::cout << "char: '" << charValue << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;

        int intValue = static_cast<int>(floatValue);
        std::cout << "int: " << intValue << std::endl;

        double doubleValue = static_cast<double>(floatValue);
        std::cout << "double: " << doubleValue << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << BLUE << "Input to Float: Invalid argument: " << e.what() << std::endl;
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << BLUE << "Input to Float: Out of range: " << e.what() << std::endl;
    }

    std::cout << GREEN << "Input as Char: " << x.c_str() << RESET << std::endl;
}