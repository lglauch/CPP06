#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << GRAY << "ScalaConverter default constructor called" << RESET << std::endl;
}

Serializer::Serializer(const Serializer &old)
{
	(void)old;
	std::cout << GRAY << "ScalaConverter copy constructor called" << RESET << std::endl;
}

Serializer& Serializer::operator=(const Serializer &old)
{
	(void)old;
	std::cout << GRAY << "ScalaConverter default assignment operator called" << RESET << std::endl;
	return (*this);
}
Serializer::~Serializer(void)
{
	std::cout << GRAY << "ScalaConverter destructor called" << RESET << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}