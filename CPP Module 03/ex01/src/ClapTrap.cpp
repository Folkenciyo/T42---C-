/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:14:43 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/24 12:14:43 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap(str name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(4)
{
    std::cout << std::setw(15) << "ClapTrap \033[0m*" << _name << "* is born with default constructors\033[0m" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[46m----------------------------\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" <<std::setw(27) << "\033[35mHit Points: \033[0m" << this->_hitPoints << std::setw(16) << "\033[46m-\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" << std::setw(27) << "\033[35mEnergy Points: \033[0m" << this->_energyPoints << std::setw(16) << "\033[46m-\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" << std::setw(27) << "\033[35mAttack Damage: \033[0m" << this->_attackDamage << std::setw(17) << "\033[46m-\033[0m" << std::endl;
    std::cout << std::setw(30) << "\033[46m----------------------------\033[0m" << std::endl;
    std::cout << std::endl;    
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << std::setw(30) << "ClapTrap *" << _name << "* has been cloned" << std::endl;
    *this = src;
}

ClapTrap::ClapTrap(void)
{
    std::cout << "Basic ClapTrap has been born";
}

ClapTrap::~ClapTrap(void)
{
    std::cout << std::setw(10) << "ClapTrap *" << _name << "* is dead" << std::endl;
    std::cout << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rSym)
{
    std::cout << "Assignment operator for ClapTrap called." << std::endl;
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
/*                             Getters & Setters                              */
/* -------------------------------------------------------------------------- */

str ClapTrap::getName(void) const
{
    return this->_name;
}

int ClapTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
    return this->_attackDamage;
}

/* .......................................... */

void ClapTrap::setName(str name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}

/* -------------------------------------------------------------------------- */
/*                             Member functions                               */
/* -------------------------------------------------------------------------- */

void ClapTrap::attack(str const &target)
{
    std::cout << std::setw(10) << "ClapTrap *" << _name << "* attacks *" << target << "* causing *" << this->_attackDamage << "* points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << std::setw(10) << "ClapTrap *" << _name << "* has taken *" << amount << "* points of damage!" << std::endl;
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << std::setw(10) << "ClapTrap *" << _name << "* has been repaired for *" << amount << "* points of damage!" << std::endl;
    this->_hitPoints += amount;
    std::cout << std::endl;
    std::cout << std::setw(80) << "\033[1;35mTOTAL Hit Points: \033[0m" << this->_hitPoints << std::endl;
}
