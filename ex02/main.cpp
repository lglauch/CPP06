#include "Base.hpp"
#include "A.hpp"
#include "A.hpp"
#include "A.hpp"

int main(void)
{
	Base *randomClass;
	randomClass = nullptr;

	randomClass = randomClass->generate();
	randomClass->identify(randomClass);
	randomClass->identify(*randomClass);
}