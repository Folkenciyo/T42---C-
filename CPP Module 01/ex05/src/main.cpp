/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:23:44 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/19 16:34:52 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;

    harl.announce("DEBUG");
    harl.announce("INFO");
    harl.announce("WARNING");
    harl.announce("ERROR");
    
    return (0);
}