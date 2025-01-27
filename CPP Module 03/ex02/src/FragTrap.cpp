/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:52:55 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/27 11:52:55 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */
FragTrap::FragTrap(str name) : ClapTrap() {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "The heroic FragTrap " << this->_name << " enter in the arena to kill the vilains !" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[46m----------------------------\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" << std::setw(27) << "\033[35mHit Points: \033[0m" << this->_hitPoints << std::setw(15) << "\033[46m-\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" << std::setw(27) << "\033[35mEnergy Points: \033[0m" << this->_energyPoints << std::setw(15) << "\033[46m-\033[0m" << std::endl;
    std::cout << "\033[46m-\033[0m" << std::setw(27) << "\033[35mAttack Damage: \033[0m" << this->_attackDamage << std::setw(16) << "\033[46m-\033[0m" << std::endl;
    std::cout << std::setw(30) << "\033[46m----------------------------\033[0m" << std::endl;
    std::cout << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) // Initialize base class with copy constructor
{
    std::cout << std::setw(30) << "FragTrap *" << src.getName() << "* has been cloned" << std::endl;
    *this = src;
}

FragTrap::~FragTrap() {
	std::cout << "The heroic FragTrap " << this->_name << " flew away, and leave this world with dignity." << std::endl;
    std::cout << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const &rSym) {
	if (this != &rSym) {
		this->_name = rSym.getName();
		this->_hitPoints = rSym.getHitPoints();
		this->_energyPoints = rSym.getEnergyPoints();
		this->_attackDamage = rSym.getAttackDamage();
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	FragTrap::highFivesGuys() {
	std::cout << this->_name << " : Who wants a high-five ?" << std::endl;
}