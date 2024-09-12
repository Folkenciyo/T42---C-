/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:28:28 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/04 18:28:28 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "\033[33mThe address of the string: \t" << &string << std::endl;
    std::cout << "\033[32mThe address of the stringPTR: \t" << stringPTR << std::endl;
    std::cout << "\033[34mThe address of the stringREF: \t" << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "\033[33mThe string: " << string << std::endl;
    std::cout << "\033[32mThe stringPTR: " << *stringPTR << std::endl;
    std::cout << "\033[34mThe stringREF: " << stringREF << std::endl;
    return (0);
}