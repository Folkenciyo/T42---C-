/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:25:38 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/04 18:25:38 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if(N <= 0)
    {
        std::cout << "Error: The amount of zombies must be greater than 0" << std::endl;
        return (NULL);
    }
    Zombie *hordeZombie = new Zombie[N];
    if(hordeZombie == NULL)
    {
        std::cout << "Error: Memory could not be allocated" << std::endl;
        return (NULL);
    }
    for(int i = 0; i < N; i++)
    {
        hordeZombie[i].setName(name, i);
    }
    return (hordeZombie);
}