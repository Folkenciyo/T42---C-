/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:19:55 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/26 13:24:34 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int _value;
        static const int _fractional_bits = 8;
    public:
        //Constructor
            Fixed();
            Fixed(const Fixed &src);
        //Destructor
            ~Fixed();
        //Operator
            Fixed &operator=(const Fixed &src);
        //Methods
            int getRawBits(void) const;
            void setRawBits(int const raw);
};

#endif