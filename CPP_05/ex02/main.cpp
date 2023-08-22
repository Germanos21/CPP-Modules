#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

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
    Bureaucrat guy("boss", 1);
    ShrubberyCreationForm shrub("wow");
    PresidentialPardonForm pardon("joan");
    try
    {
        guy.signAForm(pardon);
        std::cout << pardon << std::endl;
        pardon.execute(guy);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
