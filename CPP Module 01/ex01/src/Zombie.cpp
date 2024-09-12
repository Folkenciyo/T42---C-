/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:25:20 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/04 18:25:20 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "\033[32mZombie " << this->name << " has been destroyed\033[0m" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "\033[32m" << this->name << " \033[31mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

void Zombie::setName(std::string name, int i)
{
    name = name + "["+ (char)(i + 48) + "]";
    this->name = name;
}
