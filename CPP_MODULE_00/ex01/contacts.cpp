/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 05:44:11 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/20 13:06:57 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

contacts::contacts()
{
	index_ = 0;
	first_name_ = "";
	last_name_ = "";
	nick_name_ = "";
	phone_number_ = "";
	darkest_secret_ = "";
}

void	contacts::SetIndex(const int index){
	index_ = index;
}

void	contacts::SetFirstName(const std::string firstname)
{
	first_name_ = firstname;
}

void	contacts::SetLastName(const std::string lastname)
{
	last_name_ = lastname;
}

void	contacts::SetDarkestSecret(const std::string darkestsecret)
{
	darkest_secret_ = darkestsecret;
}

void	contacts::SetPhoneNumber(const std::string phonenumber)
{
	phone_number_ = phonenumber;
}

void	contacts::SetNickName(const std::string nickname)
{
	nick_name_ = nickname;
}

int	contacts::GetIndex()
{
	return index_;
}

std::string&	contacts::GetLastName()
{
	return last_name_;
}

std::string&	contacts::GetDarkestSecret()
{
	return darkest_secret_;
}

std::string&	contacts::GetPhoneNumber()
{
	return phone_number_;
}

std::string&	contacts::GetNickName()
{
	return nick_name_;
}

std::string&	contacts::GetFirstName()
{
	return first_name_;
}

void	contacts::DisplayAllInfo()
{
	std::cout << "First Name: " << GetFirstName() << std::endl;
	std::cout << "Last Name: " << GetLastName() << std::endl;
	std::cout << "NickName: " << GetNickName() << std::endl;
	std::cout << "Phone Number: " << GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << GetDarkestSecret() << std::endl;
}
