/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:46:18 by juguerre          #+#    #+#             */
/*   Updated: 2024/06/16 16:46:18 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_full = false;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void PhoneBook::show_instruction(void)
{
    std::cout << "Welcome to the phonebook!" << std::endl;
    std::cout << "You can use the following commands:" << std::endl;
    std::cout << "\033[32m------------------------------------\033[0m" << std::endl;
    std::cout << "\033[32m|\033[0m \033[33mCommands\033[0m \033[32m|\033[0m \033[33mDescription\033[0m           \033[32m|\033[0m" << std::endl;
    std::cout << "\033[32m------------------------------------\033[0m" << std::endl;
    std::cout << "\033[32m|\033[0m ADD      \033[32m|\033[0m Add a new contact     \033[32m|\033[0m" << std::endl;
    std::cout << "\033[32m------------------------------------\033[0m" << std::endl;
    std::cout << "\033[32m|\033[0m SEARCH   \033[32m|\033[0m Search for a contact  \033[32m|\033[0m" << std::endl;
    std::cout << "\033[32m------------------------------------\033[0m" << std::endl;
    std::cout << "\033[32m|\033[0m EXIT     \033[32m|\033[0m Exit the phonebook    \033[32m|\033[0m" << std::endl;
    std::cout << "\033[32m------------------------------------\033[0m" << std::endl;
    return;
}
