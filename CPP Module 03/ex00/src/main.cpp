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


#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Pistachu("\033[4;33mPistachu\033[0m");
	ClapTrap	Lagarmander("\033[4;31mLagarmander\033[0m");

	Pistachu.attack("\033[4;31mLagarmander\033[0m");
	Lagarmander.takeDamage(Pistachu.getAttackDamage());
	Lagarmander.beRepaired(2);

	return 0;
}