/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:24:43 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/08 12:24:43 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
    std::cout << "HumanA " << this->name << " is born to kill and later being killed" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << this->name << " is dead" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << "." << std::endl;
}