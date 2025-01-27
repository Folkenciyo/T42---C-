/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:43:05 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/19 18:43:06 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	Pistachu("\033[4;33mPistachu\033[0m");
	ClapTrap	*Lagarmander = new ClapTrap("\033[4;31mLagarmander\033[0m");
	ScavTrap	MuevoTwo("\033[35mMuevoTwo\033[0m");
	FragTrap	Articuluno("\033[36mArticuluno\033[0m");

	Pistachu.attack("\033[35mMuevoTwo\033[0m");
	MuevoTwo.takeDamage(Pistachu.getAttackDamage());
	MuevoTwo.beRepaired(18);
	MuevoTwo.guardGate();
	MuevoTwo.attack("\033[4;31mLagarmander\033[0m");
	Lagarmander->takeDamage(MuevoTwo.getAttackDamage());
	delete Lagarmander;
	Articuluno.attack("\033[35mMuevoTwo\033[0m");
	MuevoTwo.takeDamage(Articuluno.getAttackDamage());
	Articuluno.highFivesGuys();

	return 0;
}