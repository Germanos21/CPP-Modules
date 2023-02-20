/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 06:53:09 by gchernys          #+#    #+#             */
/*   Updated: 2023/02/20 13:04:21 by gchernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <iomanip>
#include <string>

class contacts{
private:
	std::string	first_name_;
	std::string	last_name_;
	std::string	nick_name_;
	std::string	phone_number_;
	std::string	darkest_secret_;
public:
	int	index_;
	//Constructor
	contacts();
	//Deconstructor:
	~contacts();
	
	//Setters
	void	contacts::SetIndex(const int index);
	void	contacts::SetFirstName(const std::string firstname);
	void	contacts::SetLastName(const std::string lastname);
	void	contacts::SetDarkestSecret(const std::string darkestsecret);
	void	contacts::SetPhoneNumber(const std::string phonenumber);
	void	contacts::SetNickName(const std::string nickname);
	//Getters
	int	contacts::GetIndex();
	std::string&	contacts::GetLastName();
	std::string&	contacts::GetDarkestSecret();
	std::string&	contacts::GetPhoneNumber();
	std::string&	contacts::GetNickName();
	std::string&	contacts::GetFirstName();
	void	contacts::DisplayAllInfo();
	void	contacts::DisplayInfo();
	void	contacts::addContact();
};

#endif