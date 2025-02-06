/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:06:35 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/02 21:06:35 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal::Animal("Dog")
{
    std::cout << "\033[34mDog\033[0m constructor called" << std::endl;
}

Dog::Dog(const Dog &copy):Animal::Animal(copy)
{
    *this = copy;
    std::cout << "\033[34mDog\033[0m copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "\033[34mDog\033[0m destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rSym)
{
    if (this != &rSym)
        this->_type = rSym._type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "\033[34mGuau guau\033[0m" << std::endl;
}
