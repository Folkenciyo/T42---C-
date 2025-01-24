/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:10:38 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/24 12:10:38 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>
#include <string>
#include <iomanip>

typedef std::string str;

class ClapTrap{
    public:
        //Constructor
        ClapTrap(str name);
        ClapTrap(ClapTrap const &src);
        //Destructor
        ~ClapTrap(void);

        ClapTrap &operator=(ClapTrap const &rSym);

        //Getters
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getAttackDamage(void) const;
        //Setters
        void setHitPoints(int hitPoints);
        void setEnergyPoints(int energyPoints);
        void setAttackDamage(int attackDamage);

        //Member functions (actions)
        void attack(str const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
    private:
        str _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif