#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <sys/time.h>

class AForm;

class RobotomyRequestForm : public AForm
{
private:
	const std::string	_target;
	int					_minsign;
	int					_minexec;
	int					_signed;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm(const std::string target);

	virtual void execute(Bureaucrat const & executor) const;
};

#endif