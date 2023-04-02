#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	annouce[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == annouce[i])
		{
			switch(i) 
			{
				case 0:
					ft_ptr = &Harl::debug;
					(this->*ft_ptr)();
					return ;
				case 1:
					ft_ptr = &Harl::info;
					(this->*ft_ptr)();
					return ;
				case 2:
					ft_ptr = &Harl::warning;
					(this->*ft_ptr)();
					return ;
				case 3:
					ft_ptr = &Harl::error;
					(this->*ft_ptr)();
					return ;
			}
		}
	}
	std::cout << "Invalid Level" << std::endl;
	return ;
}