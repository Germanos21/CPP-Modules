#include "ScalarConverter.hpp"

int	cpp_atoi(std::string str)
{
	const char *placeholder = str.c_str();

	int i = 0;
	bool flag = false;
	long result = 0;

	if (placeholder[i] == '-')
	{
		flag = true;
		i++;
	}

	while (placeholder[i])
	{
		if (result < INT_MIN || result > INT_MAX)
			return (-1);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (flag == true)
		return (result * -1);
	return (result);
}

int	cpp_atoi_char(std::string str)
{
	const char *placeholder = str.c_str();

	int i = 0;
	bool flag = false;
	long result = 0;

	if (placeholder[i] == '-')
	{
		flag = true;
		i++;
	}

	while (placeholder[i])
	{
		if (result < INT_MIN || result > INT_MAX)
			return (-1);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (flag == true)
		return (result * -1 + 48);
	return (result + 48);
}