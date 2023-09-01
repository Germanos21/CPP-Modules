#include "ScalarConverter.hpp"

static void	print_char(char *input)
{
	if (!input)
		return ;

	int n = atoi(input);

	std::cout << "char: ";

	if (*input < '0' || *input > '9')
		std::cout << "impossible" << std::endl;
	else if (n < 32 || n > 126)
		std::cout << "non printable" << std::endl;
	else
		std::cout << static_cast<char>(n) << std::endl;
}

static void	print_int(char *input)
{
	std::cout << "int: ";
    if (!input || *input == '\0')
	{
        std::cerr << "impossible" << std::endl;
        return ;
    }

    bool isNegative = false;
    long int result = 0;
    int i = 0;
    if (input[0] == '-') {
        isNegative = true;
        i = 1;
    }

    while (input[i] != '\0')
	{
        if (isdigit(input[i]))
		{
            int digit = input[i] - '0';

            result = result * 10 + digit;
        }
		else
		{
			std::cerr << "Impossible" << std::endl;
			return ;
        }
		if (i > 11)
		{
			std::cerr << "Impossible" << std::endl;
			return ;
        }
		i++;
    }
	
	result =  isNegative ? -result : result;
	
	if (result < INT_MIN || result > INT_MAX)
	{
		std::cerr << "Impossible" << std::endl;
		return ;
	}
	
	std::cout << static_cast<int>(result) << std::endl;
}

static void	print_float(char *input)
{
	std::cout << "float: ";
	float floatval = std::atof(input);

	if (floatval != 0.0)
		std::cout << static_cast<float>(floatval) << "f" << std::endl;
	else
		std::cout << "impossible" << std::endl; 
}

void	ScalarConverter::Convert(char *input)
{
	if (!input)
		return ;
	print_char(input);
	print_int(input);
	print_float(input);
}
