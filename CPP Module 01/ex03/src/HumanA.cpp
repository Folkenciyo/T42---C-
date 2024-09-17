/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:24:43 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/17 18:32:54 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
    std::cout << "\033[33mHuman-A " << this->name << " is born to kill and later being killed\033[0m" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "\033[33mHuman-A " << this->name << " is dead\033[0m" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << "\033[33m" << this->name << " attacks with his " << this->weapon.getType() << ".\033[0m" << std::endl;
}