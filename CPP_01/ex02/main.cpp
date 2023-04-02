#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << std::endl;
	std::cout << "memory address of str: " << &str << std::endl;
	std::cout << "memory address of strPtr: " << strPtr << std::endl;
	std::cout << "memory address of strRef: " << &strRef << std::endl;
	std::cout << std::endl;
	std::cout << "the value of str: " << str << std::endl;
	std::cout << "the value of strPtr: " << *strPtr << std::endl;
	std::cout << "the value of strRef: " << strRef << std::endl;
	return (0);
}