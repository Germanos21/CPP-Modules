#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form		form("name", 140, 149);
		Bureaucrat	guy1("guy1", 150);
		Bureaucrat	guy2("guy2", 1);
		std::cout << form << std::endl;
		form.beSigned(guy1);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
