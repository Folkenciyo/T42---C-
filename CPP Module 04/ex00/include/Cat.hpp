/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:04:56 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/28 17:04:56 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &	operator=(Cat const &rSym);

		void	makeSound() const;
	private:
		str		_type;
};

#endif