/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:03:55 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/02 21:03:55 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(str type) : _type(type)
{
    std::cout << "\033[32mAnimal\033[0m constructor called" << std::endl;
}

Animal::Animal() : _type("Unknown")
{
    std::cout << "\033[32mAnimal\033[0m constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "\033[32mAnimal\033[0m copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "\033[32mAnimal\033[0m destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rSym)
{
    if (this != &rSym)
        this->_type = rSym._type;
    return *this;
}

str Animal::getType() const
{
    return this->_type;
}

void Animal::setType(str type)
{
    this->_type = type;
}

void	Animal::makeSound() const {
	std::cout << "Grrr..." << std::endl;
}

void    Animal::think() const {
    std::cout << "I am thinking ...." << std::endl;
}