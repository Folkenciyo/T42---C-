/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:38:04 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/08 12:38:04 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    this->isWeapon = false;
    std::cout << "HumanB " << this->name << " is born to kill and later being killed" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this->name << " is dead" << std::endl;
}

void HumanB::attack()
{
    if (this->isWeapon == true)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
    this->isWeapon = true;
    std::cout << this->name << " has a new weapon: " << this->weapon->getType() << std::endl;
}

