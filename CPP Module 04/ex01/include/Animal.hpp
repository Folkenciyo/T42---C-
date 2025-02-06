/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:05:04 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/28 12:05:04 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

typedef std::string str;

class Animal
{
    public:
    // Constructors & Destructor
        Animal(str type);
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
    // Operator
        Animal &operator=(Animal const &rSym);
    // Getters & Setters
        str getType() const;
        void setType(str type);
    // Member Functions
        virtual void	makeSound() const;
        virtual void	think() const;
    protected:
        str _type;
};