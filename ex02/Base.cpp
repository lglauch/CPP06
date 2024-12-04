#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <typeinfo>

Base::~Base(void)
{
	std::cout << "Base destructor called" << std::endl;
}

Base* Base::generate(void)
{
	Base *base;
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int randomNum = rand() % 3;
	std::cout << "Random num: " << randomNum << std::endl;
	if (randomNum == 0)
		base = new A();
	else if (randomNum == 1)
		base = new B();
	else
		base = new C();
	return base;
}

//dont need to catch exception since I cast to a pointer which just return a nullptr if it fails
void Base::identify(Base* p)
{
	if(dynamic_cast<A*>(p) != nullptr)
		std::cout << "A (pointer)" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B (pointer)" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C (pointer)" << std::endl;
	else
		std::cout << "Unkown type" << std::endl;
}

//cant giveback nullptr because reference it not a pointertype
void Base::identify(Base& p)
{
	try{
		(void)(dynamic_cast<A&>(p));
		std::cout << "A (reference)" << std::endl;
		return;
	}
	catch(std::bad_cast & e)
	{

	}
	try{
		(void)(dynamic_cast<B&>(p));
		std::cout << "B (reference)" << std::endl;
		return;
	}
	catch(std::bad_cast & e)
	{

	}
	try{
		(void)(dynamic_cast<C&>(p));
		std::cout << "C (reference)" << std::endl;
		return;
	}
	catch(std::bad_cast & e)
	{

	}
	std::cout << "Unkown type" << std::endl;
}
