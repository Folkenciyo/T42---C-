/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:09:35 by juguerre          #+#    #+#             */
/*   Updated: 2025/02/02 21:09:35 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
    std::cout << "\033[31mWrong\033[36mCat\033[0m constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal::WrongAnimal(copy)
{
    *this = copy;
    std::cout << "\033[31mWrong\033[36mCat\033[0m copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "\033[31mWrong\033[36mCat\033[0m destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rSym)
{
    if (this != &rSym)
        this->_type = rSym._type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "YIAAA YIAAA" << std::endl;
}
