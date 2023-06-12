#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _name("ShrubberyCreationForm"), _minGradeSign(145), _minGradeExec(137)
{
	this->_isSigned = 0;
	std::cout << "Default Shrubbery Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default Shrubbery Destructor Called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	if (this->_isSigned != rhs._isSigned)
	{
		this->_isSigned = rhs.getSigned();
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : _name(copy._name), _minGradeSign(copy._minGradeSign), _minGradeExec(copy._minGradeExec)
{
	_isSigned = copy.getSigned();
	std::cout << "AForm Copy Constructor Called" << std::endl;
}

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (this->getSigned() == 0)
		throw(NotSignedException());
	else if (executor.getGrade() > this->getMinGradeExec())
		throw(GradeTooLowException());
	
	std::ofstream tree(this->getName() + "_shrubbery");
	tree << "    ccee88oo" << std::endl;
	tree << "  C8O8O8Q8PoOb o8oo" << std::endl;
	tree << " dOB69QO8PdUOpugoO9bD" << std::endl;
	tree << " dOB69QO8PdUOpugoO9bD" << std::endl;
	tree << " dOB69QO8PdUOpugoO9bD" << std::endl;
	tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	tree << "    6OuU  /p u gcoUodpP" << std::endl;
	tree << "    6OuU  /p u gcoUodpP" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "______________________" << std::endl;
	tree << "______________________" << std::endl;
	tree << "    ccee88oo" << std::endl;
	tree << "  C8O8O8Q8PoOb o8oo" << std::endl;
	tree << " dOB69QO8PdUOpugoO9bD" << std::endl;
	tree << " dOB69QO8PdUOpugoO9bD" << std::endl;
	tree << " dOB69QO8PdUOpugoO9bD" << std::endl;
	tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	tree << "    6OuU  /p u gcoUodpP" << std::endl;
	tree << "    6OuU  /p u gcoUodpP" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "         |||||" << std::endl;
	tree << "______________________" << std::endl;
	tree << "______________________" << std::endl;
	tree.close();
}
