/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:07:39 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/02 21:07:39 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(str type) : _type(type)
{
    std::cout << "\033[31mWrong\033[32mAnimal\033[0m constructor called" << std::endl;
}

WrongAnimal::WrongAnimal() : _type("Unknown")
{
    std::cout << "\033[31mWrong\033[32mAnimal\033[0m constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout << "\033[31mWrong\033[32mAnimal\033[0m copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "\033[31mWrong\033[32mAnimal\033[0m destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rSym)
{
    if (this != &rSym)
        this->_type = rSym._type;
    return *this;
}

str WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::setType()
{
    this->_type = "Unknown";
}

void WrongAnimal::makeSound() const
{
    std::cout << "\033[31mWrong\033[32mAnimal\033[0m sound" << std::endl;
}
