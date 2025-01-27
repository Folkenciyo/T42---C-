/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:50:46 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/27 11:50:46 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
        //Constructor
        FragTrap(str name);
        FragTrap(FragTrap const &src);
        FragTrap(void);
        //Destructor
        ~FragTrap(void);

		FragTrap &	operator=(FragTrap const &rSym);

		void	highFivesGuys(void);
	private:
};

#endif