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
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat &	operator=(Cat const &rSym);

		void	makeSound() const;
		virtual void think() const;
	private:
		str		_type;
		Brain	*_brain;
};

#endif