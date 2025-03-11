/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:05:04 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/28 12:05:04 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

typedef std::string str;

class AAnimal
{
    protected:
        str _type;
        AAnimal(str type);
        AAnimal();
        AAnimal(const AAnimal &copy);
    public:
    // Constructors & Destructor
        virtual ~AAnimal();
    // Operator
        AAnimal &operator=(AAnimal const &rSym);
    // Getters & Setters
        str getType() const;
        void setType(str type);
    // Member Functions
        virtual void	makeSound() const;
        virtual void	think() const;
};

#endif
