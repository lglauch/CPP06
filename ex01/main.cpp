#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.id = 42;
	data.name = "Skittle";
	Data *test = nullptr;
	uintptr_t cool;
	std::cout << "Adress of Data: " << &data << std::endl;
	cool = Serializer::serialize(&data);
	test = Serializer::deserialize(cool);
	std::cout << "Adress of Data: " << &data << std::endl;
	//&test -> memory address of the pointer but we want just test since it the address of the value it points to
	std::cout << "Adress of Test: " << test << std::endl;
	if (test == &data)
	{
		std::cout << "Program successful!" << std::endl;
		std::cout << "Data.id: " << data.id << std::endl;
		std::cout << "Data.name: " << data.name << std::endl;
		std::cout << "Test.id: " << test->id << std::endl;
		std::cout << "Test.name: " << test->name << std::endl;
	}

	else
		std::cout << "Program failed, different memory addresses of data and test" << std::endl;
}