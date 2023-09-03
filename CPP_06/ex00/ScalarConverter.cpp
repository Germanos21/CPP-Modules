#include "ScalarConverter.hpp"

static void convert_char(std::string input)
{

	if (input.empty())
		return ;

	std::cout << "char: ";
	int check = 0;
	std::istringstream str(input);

	str >> check;

	if (check == 0)
	{
		check = cpp_atoi_char(input);
		if (check == 0)
        	std::cout << "impossible" << std::endl;
	}

    if (check >= 0 && check < 32)
        std::cout << "Non displayable" << std::endl;
    else if (check >= 32 && check <= 126)
        std::cout << "'" << static_cast<char>(check) << "'" << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void	ScalarConverter::Convert(std::string input)
{
	if (input.empty())
		return ;
	convert_char(input);
}
