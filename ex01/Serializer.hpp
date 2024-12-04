#pragma once

#include <iostream>
#include "Data.hpp"

#define GRAY "\033[90m"
#define RESET "\033[0m"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &old);
		Serializer& operator=(const Serializer &old);
		virtual ~Serializer() = 0;

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};