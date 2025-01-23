/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:35:53 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/19 17:27:08 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//constructor
Harl::Harl()
{
	std::cout << "\033[1;34mUna persona desagradable salvaje ha aparecido en tu camino" << std::endl;
	std::cout <<  std::endl;
    return ;
}

//destructor
Harl::~Harl()
{
    return ;
}

//publics methods
void Harl::announce(std::string level)
{
    void		(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int 		i;

	i = 0;
	while(i <= 4)
	{
		if (levels[i] == level)
			break ;
		i++;
	}
		std::cout << "level[" << i << "]" << levels[i] <<" :" << std::endl;
	switch (i)
	{
	case 0:
		(this->*ptr_complain[0])();
		break;
	case 1:
		(this->*ptr_complain[1])();
		break;	
	case 2:
		(this->*ptr_complain[2])();
		break;
	case 3:
		(this->*ptr_complain[3])();
		break;
	default:
		std::cout << "\033[44mSe escucha como ruido desagradable, pero no se le entiende, así mejor...\033[0m" << std::endl;
		break;
	}
	
}

//private methods
void Harl::debug(void)
{
    std::cout << "\033[0;105mYo soy tan grandisima como persona, que nadie es capaz de verlo, ... y mucho menos tú\033[0m" << std::endl;
}

void Harl::info(void)
{
    std::cout << "\033[0;106mSólo te lo digo una vez más, ¡No tienes razón porque NO! ¡Y PUNTO!\033[0m" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "\033[0;102mLa proxima vez que lo hagas, no te aviso, simplemente te destruyo.\033[0m" << std::endl;
}

void Harl::error(void)
{
    std::cout << "\033[0;103mEg keh... Yo no... !""%·%/E%(·%$·"".\033[0m" << std::endl;
}