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

void ScalarConverter::convert(std::string &x)
{
    char charValue;
    int	intValue;
	float	floatValue;
	double	doubleValue;
	bool isChar = false, isInt = false, isFloat = false, isDouble = false;


    if (x.length() == 1 && isprint(x[0]) && !isdigit(x[0])){
        isChar = true;
    }
	else{
		try
    	{
			size_t pos;
			intValue = stoi(x, &pos);
			if (pos == x.length())
				isInt = true;
	}
        std::cout << GREEN << "char: impossible" << RESET << std::endl;
	std::cout << PURPLE << "int: " << intValue << RESET << std::endl;
	std::cout << BLUE << "float: " << floatValue << RESET << std::endl;
	std::cout << RED << "int: " << doubleValue << RESET << std::endl;
	}
}