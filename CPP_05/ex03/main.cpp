#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    // Bureaucrat man;
    // Bureaucrat man2("another man", 150);
    // man = man2;

    // std::cout << man << std::endl;
    // std::cout << man2 << std::endl;
    // try
    // {
    //     man2.setGrade(1);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // std::cout << man2 << std::endl;
    // return (0);


    // AForm AForm("AForm", 150, 150);
    // Bureaucrat guy("guy", 12);
    // std::cout << AForm << std::endl;
    // try
    // {
    //     AForm.beSigned(guy);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // guy.signAForm(AForm);
    // std::cout << AForm << std::endl;



    // AForm AForm("AForm", 149, 149);
    // Bureaucrat guy("guy", 150);
    // std::cout << AForm << std::endl;
    // try
    // {
    //     AForm.beSigned(guy);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // std::cout << AForm << std::endl;

    // Bureaucrat              guy("boss", 1);
    // ShrubberyCreationForm   shrub("wow");
    // PresidentialPardonForm  pardon("joan");
    // RobotomyRequestForm     robot("targeted");

    // try
    // {
    //     std::cout << pardon << std::endl;
    //     guy.signAForm(pardon);
    //     std::cout << pardon << std::endl;
    //     pardon.execute(guy);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Emperor", 1);
		Intern *z = new Intern();
		AForm *b = z->makeForm("RobotomyRequestForm", "Bender");
		AForm *c = z->makeForm("ShrubberyCreationForm", "Cristmas");
		// AForm *c = new ShrubberyCreationForm("christmas");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << a;
		std::cout << b;
		std::cout << c;
		std::cout << std::endl;

		b->beSigned(*a);
		a->signAForm(*c);
		std::cout << std::endl;
		std::cout << b;
		std::cout << c;
		std::cout << std::endl;

		for (int i= 0; i < 10; i++)
			b->execute(*a);
		a->executeForm(*c);
		// c->execute(*a);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		delete z;
		std::cout << std::endl;
	}

    return (0);
}
