/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:20:29 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/21 07:33:51 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	ListOptions()
{
	std::cout << "Please Choose an option provided in the subject" << std::endl;
}

int	main(int argc, char **argv)
{
	std::string choice;
	std::cout << "Please choose an option provided in the subject" << std::endl;
	while (1)
	{
		std::cin >> choice;
		if (choice == "ADD")
			exit (1);
		else if (choice == "SEARCH")
			exit (1);
		else if (choice == "EXIT" || std::cin.eof())
			break ;
	}
	return (0);
}