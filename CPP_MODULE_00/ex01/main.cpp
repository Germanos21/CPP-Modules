/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:37:08 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/20 06:22:52 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_choices(void)
{
	std::cout <<	"\nPlease Type \"EXIT\" to exit the application\n"
					"\nOtherwise, Please Type \"ADD\" to add a contact\n"
					"\nOr, you could type \"SEARCH\" to search for a contact\n"
					"\nPlease be careful, as the inputs are case-sensitive\n"
					<< std::endl;
}

int	main(int argc, char **argv)
{
	std::string	option;

	if (argc == 1)
	{
		std::cout << "\nWelcome to the future" << std::endl;
		std::cout << "\nPlease provide an input" << std::endl;
		print_choices();
		while (true)
		{
			std::getline(std::cin,option);
			if (option == "ADD")
				exit(1);
			else if (option == "SEARCH")
				exit (1);
			else if (option == "EXIT")
				break ;
		}
	}
	else
		std::cerr << "Invalid Number of Arguments" << std::endl;

}