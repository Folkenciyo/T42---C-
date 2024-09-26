/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:43:05 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/26 13:39:44 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main(void)
{   
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << "\n" << std::endl;
    return 0;
}