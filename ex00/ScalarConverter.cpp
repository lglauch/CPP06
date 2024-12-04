#include "ScalarConverter.hpp"
#include <stdexcept>
#include <string>
#include <cmath>
#include <iomanip>

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

void ScalarConverter::convert(const std::string &x)
{
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
		catch(std::invalid_argument & e)
		{

		}
		catch (const std::out_of_range &e)
		{

		}
		if (!isInt)
		{
			try
			{
				std::string floatString = x;
				if (floatString.back() == 'f')
					floatString.pop_back();
				size_t pos;
				floatValue = stof(floatString, &pos);
				if (pos == floatString.length())
					isFloat = true;
			}
			catch(std::invalid_argument & e)
			{

			}
			catch (const std::out_of_range &e)
			{

			}
		}
		if (!isInt && !isFloat)
		{
			try
			{
				size_t pos;
				doubleValue = std::stod(x, &pos);
				if (pos == x.length())
					isDouble = true;
			}
			catch(std::invalid_argument & e)
			{

			}
			catch (const std::out_of_range &e)
			{

			}
		}
	}
	if (isChar) {
		char c = static_cast<char>(x[0]);
		if (isprint(c))
			std::cout << GREEN << "char: " << c << RESET << std::endl;
		else
			std::cout << GREEN << "char: " << "Non displayable" << RESET << std::endl;
		std::cout << PURPLE << "int: " << static_cast<int>(c) << RESET << std::endl;
		std::cout << BLUE << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << RESET << std::endl;
		std::cout << RED << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << RESET << std::endl;
	}
	else if (isInt) {
		if (x == "-inf" || x == "+inf" || x == "inf" || x == "-inff" || x == "+inff" || x == "inff" || x == "nan")
			std::cout << GREEN << "char: impossible" << RESET << std::endl;
		else
		{
			char c = static_cast<char>(intValue);
			if (isprint(c))
				std::cout << GREEN << "char: " << c << RESET << std::endl;
			else
				std::cout << GREEN << "char: " << "Non displayable" << RESET << std::endl;
		}
		std::cout << PURPLE << "int: " << intValue << RESET << std::endl;
		std::cout << BLUE << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(intValue) << "f" << RESET << std::endl;
		std::cout << RED << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(intValue) << RESET << std::endl;
	}
	else if (isFloat) {
		if (x == "-inf" || x == "+inf" || x == "inf" || x == "-inff" || x == "+inff" || x == "inff" || x == "nan")
			std::cout << GREEN << "char: impossible" << RESET << std::endl;
		else
		{
			char c = static_cast<char>(intValue);
			if (isprint(c))
				std::cout << GREEN << "char: " << c << RESET << std::endl;
			else
				std::cout << GREEN << "char: " << "Non displayable" << RESET << std::endl;
		}
		std::cout << PURPLE << "int: " << (std::isnan(floatValue) || std::isinf(floatValue) ? "impossible" : std::to_string(static_cast<int>(floatValue))) << RESET << std::endl;
		std::cout << BLUE << "float: " <<  std::fixed << std::setprecision(1) << floatValue << "f" << RESET << std::endl;
		std::cout << RED << "double: " <<  std::fixed << std::setprecision(1) << static_cast<double>(floatValue) << RESET << std::endl;
	}
	else if (isDouble) {
		if (x == "-inf" || x == "+inf" || x == "inf" || x == "-inff" || x == "+inff" || x == "inff" || x == "nan")
			std::cout << GREEN << "char: impossible" << RESET << std::endl;
		else
		{
			char c = static_cast<char>(intValue);
			if (isprint(c))
				std::cout << GREEN << "char: " << c << RESET << std::endl;
			else
				std::cout << GREEN << "char: " << "Non displayable" << RESET << std::endl;
		}
		std::cout << PURPLE << "int: " << (std::isnan(doubleValue) || std::isinf(doubleValue) ? "impossible" : std::to_string(static_cast<int>(doubleValue))) << RESET << std::endl;
		std::cout << BLUE << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(doubleValue) << "f" << RESET << std::endl;
		std::cout << RED << "double: " << std::fixed << std::setprecision(1) << doubleValue << RESET << std::endl;
	}
	else {
		std::cout << GREEN << "char: impossible" << RESET << std::endl;
		std::cout << PURPLE << "int: impossible" << RESET << std::endl;
		std::cout << BLUE << "float: impossible" << RESET << std::endl;
		std::cout << RED << "double: impossible" << RESET << std::endl;
	}
}