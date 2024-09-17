/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:01:59 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/17 18:45:07 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon sword = Weapon("sharp and impresive sword");
        HumanA paco("Paco", sword);
        paco.attack();
        sword.setType("some other type of sword");
        paco.attack();
    }
    {
        Weapon sword = Weapon("sharp and impresive sword");
        HumanB carmen("Carmen");
        carmen.attack();
        carmen.setWeapon(sword);
        sword.setType("some other type of sword");
        carmen.attack();
    }
    return 0;
}
