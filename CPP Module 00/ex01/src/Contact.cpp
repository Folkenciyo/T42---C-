/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:15:05 by juguerre          #+#    #+#             */
/*   Updated: 2024/06/16 11:15:05 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fields_name[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return;
}

Contact::~Contact()
{
}

bool	Contact::set_contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "\033[34mPlease enter the " << Contact::_fields_name[i] << ":\n+\033[0m";
		while ( !(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			else if (this->_informations[i].length() == 0)
			{
				this->_informations[i].clear();
				std::cout << "\033[31mEmpty contact information not allowed.\033[0m" << std::endl;
				std::cout << "Please enter the " << Contact::_fields_name[i] << ":\n+";
			}
		}
	}
	std::cout << "\033[32mContact added successfully.\033[0m" << std::endl;
	return (true);
}

void	Contact::get_contact(int index) const
{
	std::cout << "\033[32m|\033[0m";
	std::cout << std::setw(4) << index << "   ";
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "\033[32m|\033[0m";
		if (this->_informations[i].length() > 10)
			std::cout << this->_informations[i].substr(0, 9) << ".";
		else
		{
			if (i == FirstName)
				std::cout << std::setw(12) << this->_informations[i];
			else if(i == NickName)
				std::cout << std::setw(10) << this->_informations[i];
			else
				std::cout << std::setw(11) << this->_informations[i];

		}
	}
	std::cout << "\033[32m|\033[0m" << std::endl;
}
