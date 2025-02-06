/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:03:55 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/02 21:03:55 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(str type) : _type(type)
{
    std::cout << "\033[32mAAnimal\033[0m constructor called" << std::endl;
}

AAnimal::AAnimal() : _type("Unknown")
{
    std::cout << "\033[32mAAnimal\033[0m constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    *this = copy;
    std::cout << "\033[32mAAnimal\033[0m copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "\033[32mAAnimal\033[0m destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rSym)
{
    if (this != &rSym)
        this->_type = rSym._type;
    return *this;
}

str AAnimal::getType() const
{
    return this->_type;
}

void AAnimal::setType(str type)
{
    this->_type = type;
}

void	AAnimal::makeSound() const {
	std::cout << "Grrr..." << std::endl;
}

void    AAnimal::think() const {
    std::cout << "I am thinking ...." << std::endl;
}