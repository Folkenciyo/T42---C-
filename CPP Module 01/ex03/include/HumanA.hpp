/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:22:19 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/08 10:22:19 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon &weapon;
    public:
        //Constructor
        HumanA(std::string name, Weapon &weapon);
        //Destructor
        ~HumanA();
        //Methods
        void attack();
};
