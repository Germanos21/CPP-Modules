#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error, only one character required" << std::endl;
		return (1);
	}
	ScalarConverter::Convert(argv[1]);
}
