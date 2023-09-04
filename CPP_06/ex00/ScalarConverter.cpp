#include "ScalarConverter.hpp"

static void convert_char(std::string input)
{

	if (input.empty())
		return ;

	std::cout << "char: ";
	long check = 0;
	std::istringstream str(input);

	check = cpp_atoi_char(input);
	if (check >= 0)
	{
		check = 0;
		str >> check;
		if (check == 0)
		{
        	std::cout << "impossible" << std::endl;
			return ;
		}
	}

    if (check >= 0 && check < 32)
        std::cout << "Non displayable" << std::endl;
    else if (check >= 32 && check <= 126)
        std::cout << "'" << static_cast<char>(check) << "'" << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

static void	convert_int(std::string input)
{
	std::cout << "int: ";

	const char *temp = input.data();
	char *conv = const_cast<char*>(temp);
	int check = 0;

	if (check == 0)
	{
		check = cpp_atoi(conv);
		if (check == 0)
        	std::cout << "impossible" << std::endl;
	}
	std::cout << static_cast<int>(check) << std::endl;
	return ;
}

void	ScalarConverter::Convert(std::string input)
{
	if (input.empty())
		return ;
	convert_char(input);
	convert_int(input);
}
