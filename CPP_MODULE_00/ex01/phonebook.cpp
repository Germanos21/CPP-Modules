/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:37:00 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/20 13:24:31 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	contacts::addContact()
{
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	DarkestSecret;
	std::string	PhoneNumber;
	int	i;

	if (i > 7)
		i = this->index_ % 8;
	std::cout << "Provide a First Name: " << std::endl;
	std::cin >> FirstName;
	std::cout << "Provide a Nickname: " << std::endl;
	std::cin >> Nickname;
	std::cout << "Provide a last Name: " << std::endl;
	std::cin >> LastName;
	std::cout << "Provide a Darkest Secret: " << std::endl;
	std::cin >> DarkestSecret;
	std::cout << "Provide a Phone Number " << std::endl;
	std::cin >> FirstName;
}
