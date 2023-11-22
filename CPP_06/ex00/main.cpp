#include "ScalarConverter.hpp"
#include <string>

int main(int argc, char** argv)
{
	try
	{
		(void)argc;
		if (argc != 2)
		{
			std::cout << "Wrong argc\n";
			return 0;
		}
		std::cout << "\n";

		ScalarConverter::convert(argv[1]);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
