/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:01:01 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/28 18:01:01 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
	public:
		WrongDog();
		WrongDog(WrongDog const &src);
		~WrongDog();

		WrongDog &	operator=(WrongDog const &rSym);

		void	makeSound() const;
	private:
		str		_type;
};

#endif