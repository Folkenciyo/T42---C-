/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:52:17 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/28 17:52:17 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog &	operator=(Dog const &rSym);

		void	makeSound() const;
	private:
		str		_type;
};

#endif