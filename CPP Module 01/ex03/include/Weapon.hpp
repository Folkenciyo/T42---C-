/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:00:11 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/08 10:00:11 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

#include <iostream>
#include <string>

class Weapon{
    private:
        std::string type;
    public:
        //Constructor
            Weapon(const std::string &type);
        //Destructor
            ~Weapon();
        //Methods
            //Getter
            const std::string getType();
            //Setter
            void setType(const std::string &weapon);
};
