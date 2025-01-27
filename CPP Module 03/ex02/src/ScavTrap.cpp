/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:07:14 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/24 18:07:14 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap(str name){
    this->_name = name;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << std::setw(15) << "ScavTrap \033[0m*" << _name << "* is born with default constructors\033[0m" << std::endl;
    std::cout << std::endl;
    std::cout <<  "\033[46m----------------------------\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" <<std::setw(27) << "\033[35mHit Points: \033[0m" << this->_hitPoints << std::setw(15) << "\033[46m-\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" << std::setw(27) << "\033[35mEnergy Points: \033[0m" << this->_energyPoints << std::setw(16) << "\033[46m-\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" << std::setw(27) << "\033[35mAttack Damage: \033[0m" << this->_attackDamage << std::setw(16) << "\033[46m-\033[0m" << std::endl;
    std::cout << std::setw(30) << "\033[46m----------------------------\033[0m" << std::endl;
    std::cout << std::endl;    
}

ScavTrap::ScavTrap(ScavTrap const &src):ClapTrap(src) // Initialize base class
{
    std::cout << std::setw(30) << "ScavTrap *" << _name << "* has been cloned" << std::endl;
    *this = src;
}

ScavTrap::ScavTrap(void)
{
    std::cout << "Basic ScavTrap has been born";
}

ScavTrap::~ScavTrap(void)
{
    std::cout << std::setw(10) << "ScavTrap *" << _name << "* is dead" << std::endl;
    std::cout << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rSym)
{
    std::cout << "Assignment operator for ScavTrap called." << std::endl;
    if(this != &rSym)
    {
        this->_name = rSym._name;
        this->_hitPoints = rSym._hitPoints;
        this->_energyPoints = rSym._energyPoints;
        this->_attackDamage = rSym._attackDamage;
    }
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                             Member functions                               */
/* -------------------------------------------------------------------------- */

void ScavTrap::attack(str const &target)
{
    std::cout << std::setw(10) << "ScavTrap *" << this->_name << "* attacks *" << target << "* causing *" << this->_attackDamage << "* points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << std::setw(10) << "ScavTrap *" << this->_name << "* has entered in Gate keeper mode" << std::endl;
}
