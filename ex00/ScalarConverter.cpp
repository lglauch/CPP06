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

void	ScalarConverter::convert(std::string x)
{
	if (strcmp(typeid(x).name(), "int"))
		std::cout << PURPLE << "Input to Int: "<< std::stoi(x) << RESET << std::endl;
	else if (typeid(x).name(), "double")
		std::cout << RED << "Input to Double: "<< std::stod(x) << RESET << std::endl;
	else if (typeid(x).name(), "float")
		std::cout << BLUE << "Input to Float: "<< std::stof(x) << RESET << std::endl;
	else if (typeid(x).name(), "char")
		std::cout << GREEN << "Input to Float: "<< x.c_str() << RESET << std::endl;
}