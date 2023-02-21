/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 07:34:42 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/21 08:19:21 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*Getter Functiosn*/
std::string	Contact::GetFirstName()
{
	return firstname;
}

std::string	Contact::GetLastName()
{
	return lastname;
}

std::string	Contact::GetNickname()
{
	return nickname;
}

std::string	Contact::GetPhoneNumber()
{
	return phonenumber;
}

std::string	Contact::Get_Darkest_Secret()
{
	return darkestsecret;
}

/*Setter Functions*/

void	Contact::SetFirstName(std::string First_name)
{
	firstname = First_name;
}

void	Contact::SetLastName(std::string Last_name)
{
	lastname = Last_name;
}

void	Contact::SetNickname(std::string Nick_name)
{
	nickname = Nick_name;
}

void	Contact::SetPhoneNumber(std::string number)
{
	phonenumber = number;
}

void	Contact::Set_Darkest_Secret(std::string secret)
{
	darkestsecret = secret;
}
