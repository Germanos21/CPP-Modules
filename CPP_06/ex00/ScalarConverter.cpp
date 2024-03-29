#include "ScalarConverter.hpp"
#include <string>
#include <cmath>

const char* ScalarConverter::WrongConvertion::what() const throw()
{
	return ("Wrong Type Convertion");
}

const char* ScalarConverter::InvalidValue::what() const throw()
{
	return ("Invalid value");
};

void ScalarConverter::convert(const std::string &argv)
{
	if (argv == "+inff" || argv == "-inff" || argv == "nanf" || argv == "nan")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		if (argv == "nan")
			std::cout << "float: Impossible" << std::endl;
		else
			std::cout << "float: " << argv << std::endl;
		if (argv == "nanf")
			std::cout << "double: Impossible" << std::endl;
		else
			std::cout << "double: " << argv << std::endl;
		return ;
	}
	
	check_arg(argv);

	convert_char(argv);
	std::cout << "int: " << convert_int(argv) << std::endl;
	std::cout << "float: " << convert_float(argv);
	if (argv.find_first_of('.', 0) == std::string::npos)
		std::cout << ".0";
	std::cout << 'f' << std::endl;
	std::cout << "double: " << convert_float(argv);
	if (argv.find_first_of('.', 0) == std::string::npos)
		std::cout << ".0";
	std::cout << std::endl;
}

void ScalarConverter::convert_char(std::string str)
{
	#define NUMBER(x) (str[x] >= '0' && str[x] <= '9')
	#define NDSYMBOL(x) ((x >= 0 && x <= 31) || x == 127)

	std::cout << "char: ";

	if (str.size() == 1 && !NUMBER(0))
	{
		std::cout << str[0] << "\n";
		return ;
	}

	int n = myStoi(str);

	if (n > 31 && n < 127)
	{
		std::cout << static_cast<char>(n) << "\n";
	}

	if (NDSYMBOL(n))
	{
		std::cout << "Non displayable\n";
		return ;
	}

	if (n < 0 || n > 127)	
		std::cout << "Impossible\n";
}

int ScalarConverter::convert_int(std::string literals)
{
	int n = myStoi(literals);
	if (literals.length() == 1 && !IS_NUMBER(literals[0]))
		return (static_cast<int>(literals[0]));
	return(n);
}

float ScalarConverter::convert_float(std::string str)
{
	int li;
	float l;
	float r;

	if (str.size() == 1 && !IS_NUMBER(str[0]))
		return static_cast<float>(str[0]);

	if (str.find_first_of('.', 0) == std::string::npos)
	{
		li = str.length();
		r = 0;
	}
	else
	{
		li = str.find_first_of('.', 0);
		r = myStoi(str.substr(li + 1, str.length() - 1)) / pow(10, str.length() - li - 1);				
	}
	l =	myStoi(str.substr(0, li)); 
	return(l + r);
}

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
	(void) obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
	(void) obj;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}
