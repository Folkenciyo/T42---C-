/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:38:04 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/17 18:42:45 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    this->isWeapon = false;
    std::cout << "\033[0;95mHuman-B " << this->name << " is born to kill and later being killed\033[0m" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "\033[0;95mHuman-B " << this->name << " is dead\033[0m" << std::endl;
}

void HumanB::attack()
{
    if (this->isWeapon == true)
        std::cout << "\033[0;95m" << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << "\033[0;95m" << this->name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
    this->isWeapon = true;
    std::cout << this->name << " has a new weapon: " << this->weapon->getType() << std::endl;
}

