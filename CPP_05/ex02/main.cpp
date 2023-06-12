#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm form;
		ShrubberyCreationForm form2(form);
		Bureaucrat Yap("Jinshu", 1);
		form = form2;

		form.beSigned(Yap);
		form.execute(Yap);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
