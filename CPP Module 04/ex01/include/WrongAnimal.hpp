/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:57:00 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/28 17:57:00 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

typedef std::string str;

class WrongAnimal {
	public:
		WrongAnimal(str type);
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();

		WrongAnimal &	operator=(WrongAnimal const &rSym);
		str			getType() const;
		void		setType();

		void	makeSound() const;
	protected:
		str	_type;
};

#endif