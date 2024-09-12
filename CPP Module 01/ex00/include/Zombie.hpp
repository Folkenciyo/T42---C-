/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:42:31 by juguerre          #+#    #+#             */
/*   Updated: 2024/06/23 18:42:31 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once  //>Es lo mismo que #ifndef RANDOMCHUMP_HPP #define RANDOMCHUMP_HPP ... #endif

#include <iostream>
#include <string>

class Zombie{
    private:
        std::string name;
    public:
        //Constructor
            Zombie(std::string name);
        //Destructor
            ~Zombie();
        //Methods
            void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
