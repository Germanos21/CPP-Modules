#include "Bureaucrat.hpp"
#include "Form.hpp"

// int main()
// {
//     Bureaucrat man;
//     Bureaucrat man2("another man", 150);
//     man = man2;

//     std::cout << man << std::endl;
//     std::cout << man2 << std::endl;
//     try
//     {
//         man2.setGrade(1);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     std::cout << man2 << std::endl;
//     return (0);
// }

int main()
{
    // Form form("form", 150, 150);
    // Bureaucrat guy("guy", 12);
    // std::cout << form << std::endl;
    // try
    // {
    //     form.beSigned(guy);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // guy.signForm(form);
    // std::cout << form << std::endl;
    Form form("form", 149, 149);
    Bureaucrat guy("guy", 150);
    std::cout << form << std::endl;
    try
    {
        form.beSigned(guy);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << form << std::endl;
    return (0);
}
