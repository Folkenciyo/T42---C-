/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:06:12 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/08 11:06:12 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Constructor
Weapon::Weapon(const std::string &type){
    this->type = type;
}

//Destructor
Weapon::~Weapon(){
    std::cout << "Weapon " << this->type << " has been dropped" << std::endl;
}

//Getter
const std::string Weapon::getType()
{
    return this->type;
}

//Setter
void Weapon::setType(const std::string &type)
{
    this->type = type;
}
