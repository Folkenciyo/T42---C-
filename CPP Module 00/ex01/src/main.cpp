/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:21:48 by juguerre          #+#    #+#             */
/*   Updated: 2024/06/16 17:21:48 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook	phonebook;
    bool        exit_program = false;
    std::string command;

    phonebook.show_instruction();
    std::cout << "Enter a command: ";
    while (!exit_program && std::getline(std::cin, command))
    {
        if (command == "ADD")
            phonebook.set_information();
        else if (command == "SEARCH")
            phonebook.get_information();
        else if (command == "EXIT")
        {
            std::cout << "Was a pleasure! " << "\033[34mNice to serve you! Goodbye!\033[0m" << std::endl;
            exit_program = true;
            continue;
        }
        else if(command == "add" || command == "search" || command == "exit")
            std::cout << "\033[31mInvalid command (case sensitive)\033[0m" << std::endl;
        else
            std::cout << "\033[31mInvalid command\033[0m" << std::endl;
        command.clear();
        phonebook.show_instruction();
        std::cout << "Enter a command: ";
    }
    if (std::cin.eof() == true)
	{
		std::cout << "\033[34mYou pressed \033[32m^D\033[34m(EOF), exiting now.\033[0m" << command << std::endl
		<< "\033[34mNice to serve you! Goodbye!\033[0m" << std::endl;
	}
    return (0);
}