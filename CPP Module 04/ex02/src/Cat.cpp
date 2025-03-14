/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:05:58 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/02 21:05:58 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"	

Cat::Cat() : AAnimal::AAnimal("Cat")
{
    std::cout << "\033[36mCat\033[0m constructor called" << std::endl;
}

Cat::Cat(const Cat &copy):AAnimal::AAnimal(copy)
{
    *this = copy;
    std::cout << "\033[36mCat\033[0m copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "\033[36mCat\033[0m destructor called" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(Cat const &rSym)
{
    if (this != &rSym)
        this->_type = rSym._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "\033[36mMiaou Miaou\033[0m" << std::endl;
}

void Cat::think() const {
	std::cout << "I am thinking this: " + this->_brain->getRandomIdea() << std::endl;
}
