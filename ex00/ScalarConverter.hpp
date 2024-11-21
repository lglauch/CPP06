#pragma once

#include <iostream>
#include <typeinfo>

#define GRAY "\033[90m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &old);
		ScalarConverter& operator=(const ScalarConverter &old);
		virtual ~ScalarConverter() = 0;

		static void convert(std::string);
};