/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:29:31 by juguerre          #+#    #+#             */
/*   Updated: 2024/06/23 19:29:31 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "\033[32mZombie " << this->name << " has been created\033[0m" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "\033[32mZombie " << this->name << " has been destroyed\033[0m" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "\033[32m" << this->name << " \033[31mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}
