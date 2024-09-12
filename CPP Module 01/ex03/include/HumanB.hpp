/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:25:10 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/08 10:25:10 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon *weapon;
        bool isWeapon;
    public:
        //Constructor
            HumanB(std::string name);
        //Destructor
            ~HumanB();
        //Methods
            void attack();
            void setWeapon(Weapon &weapon);
};
