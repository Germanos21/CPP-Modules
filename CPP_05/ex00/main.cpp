#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat man;
    Bureaucrat man2("another man", 150);
    man = man2;

    std::cout << man << std::endl;
    std::cout << man2 << std::endl;
    try
    {
        man2.setGrade(-0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << man2 << std::endl;
    return (0);
}
