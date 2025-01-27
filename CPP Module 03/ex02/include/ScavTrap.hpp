/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:07:00 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/24 18:07:00 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        //Constructor
        ScavTrap(str name);
        ScavTrap(ScavTrap const &src);
        ScavTrap(void);
        //Destructor
        ~ScavTrap(void);

        ScavTrap &operator=(ScavTrap const &rSym);

        //Member functions (actions)
        void attack(str const &target);
        void guardGate(void);
    private:
};

#endif