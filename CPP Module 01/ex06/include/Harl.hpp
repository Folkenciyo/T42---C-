/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:24:07 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/19 16:38:17 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        //Constructor
            Harl();
        //Destructor
            ~Harl();
        //Methods
            void announce(std::string level);
};
