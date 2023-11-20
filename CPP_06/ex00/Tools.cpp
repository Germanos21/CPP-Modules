#include "ScalarConverter.hpp"
#include <cmath>
#include <limits.h>

long myAtoi(std::string str)
{
	long res = 0;
	long sign = 1;
	long i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';
	return (sign * res);
}

void ScalarConverter::check_arg(const std::string& str)
{
	if (str.size() == 1)
		return ;

	size_t start = (str[0] == '+' || str[0] == '-' ? 1 : 0);
	size_t end = (str[str.size() - 1] == 'f' ? str.size() - 2 : str.size());

	if (str.find('.') != str.rfind('.'))
		throw InvalidValue();

	for (; start < end; ++start)
	{
		if (str[start] != '.' && (str[start] < '0' || str[start] > '9'))
			throw InvalidValue();
	}
}

int ScalarConverter::myStoi(std::string str)
{
	if (myAtoi(str) > INT_MAX || myAtoi(str) < INT_MIN)
		throw InvalidValue();
	return(atoi(str.c_str()));
}
