/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:10:13 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/02 21:10:13 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("WrongDog")
{
    std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy) : WrongAnimal::WrongAnimal(copy)
{
    *this = copy;
    std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(WrongDog const &rSym)
{
    if (this != &rSym)
        this->_type = rSym._type;
    return *this;
}

void WrongDog::makeSound() const
{
    std::cout << "JUA JUA" << std::endl;
}
