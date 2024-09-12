/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:25:14 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/04 18:25:14 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int     amount = 10;

    horde = zombieHorde(amount, "Paco");
    if(horde == NULL)
    {
        return (1);
    }
    for(int i = 0; i < amount; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}