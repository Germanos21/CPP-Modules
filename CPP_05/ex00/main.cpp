#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat man;
    Bureaucrat man2("another man", 130);
    man = man2;
    std::cout << man << std::endl;
    std::cout << man2 << std::endl;
}