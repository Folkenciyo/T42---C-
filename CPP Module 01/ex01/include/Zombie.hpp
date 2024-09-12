/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:25:53 by juguerre          #+#    #+#             */
/*   Updated: 2024/07/04 18:25:53 by juguerre         ###   ########.fr       */
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
            Zombie();
        //Destructor
            ~Zombie();
        //Methods
            void setName(std::string name, int i);
            void announce(void);
};

Zombie* zombieHorde( int N, std::string name );
