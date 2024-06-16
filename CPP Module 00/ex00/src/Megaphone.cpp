/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:02:05 by juguerre          #+#    #+#             */
/*   Updated: 2024/06/15 18:02:05 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j]);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}