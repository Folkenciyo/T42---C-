/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:06:40 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/19 17:08:52 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harl [DEBUG, INFO, WARNING, ERROR]" << std::endl;
        return (1);
    }
    Harl harl;

    harl.announce(argv[1]);
    return (0);
}