/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:43:05 by juguerre          #+#    #+#             */
/*   Updated: 2024/09/26 13:52:20 by juguerre         ###   ########.fr       */
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


/* Ex00 : Fixed Point vs Floating Point
Imagine,having a ruler that can measure lengths in centimeters. A fixed point number is like marking a specific number of divisions on the ruler, say 10, and using them to measure any length. For example, if you want to measure 3.5 cm, you would use the 3rd and the 5th division on the ruler. If you want to measure 12.7 cm, you would use the 12th and the 7th division on the ruler. The number of divisions you use is fixed, and you can only measure lengths that are multiples of 0.1 cm.

A floating point number is like marking a variable number of divisions on the ruler, depending on how precise you want to be. For example, if you want to measure 3.14159 cm, you would use 5 divisions on the ruler, each representing 0.00001 cm. If you want to measure 123456789 cm, you would use 9 divisions on the ruler, each representing 10000000 cm. The number of divisions you use is variable, and you can measure lengths that are not multiples of any fixed unit.

In C++, fixed point numbers are not directly supported by the language, but you can simulate them using integers and scaling factors. For example, if you want to represent a fixed point number with 4 digits after the decimal point, you can use an integer and multiply it by 10000. For example:

int x = 1234; // represents 0.1234
int y = 5678; // represents 0.5678
int z = x + y; // represents 0.6912
Floating point numbers are supported by the language using types such as float and double. These types store the number (called the mantissa or significand) and the position of the decimal point (called the exponent) separately in binary format. For example:

float x = 3.14159; // stored as (1.570795 x 2^1) + (1 x 2^-20)
float y = 123456789; // stored as (1.4656613 x 2^26) + (1 x 2^-3)
float z = x + y; // stored as (1.4656613 x 2^26) + (1 x 2^-3) + (1.570795 x 2^1) + (1 x 2^-20)
The advantage of floating point numbers is that they can represent a wider range of values with different levels of precision. The disadvantage is that they are not exact and may introduce rounding errors or loss of accuracy.

USE CASES:

Fixed point numbers:

Financial applications, such as accounting, banking, or taxation, where the exact representation of money values is important.
Embedded systems, such as microcontrollers or digital signal processors, where speed, power consumption, and chip area are critical factors.
Audio and video processing, such as compression, filtering, or mixing, where fixed point arithmetic can provide better performance and quality than floating point arithmetic.
Floating point numbers:

Scientific and engineering applications, such as physics, chemistry, biology, or astronomy, where very small or very large values need to be represented and manipulated.
Graphics and gaming applications, such as rendering, animation, or simulation, where floating point arithmetic can provide more realistic and dynamic effects than fixed-point arithmetic.
Machine learning and artificial intelligence applications, such as neural networks, deep learning, or natural language processing, where floating point arithmetic can provide more flexibility and accuracy than fixed-point arithmetic.
If you find any mistakes feel free to contact me through email: mabbas@students.42wolfsburg.de or slack “mabbas”

Detailed Resources To Read:
1. Floating point versus fixed point: what are the pros/cons? — Stack Overflow

2: Fixed point vs Floating point number — Stack Overflow

3: Difference Between Fixed Point and Floating Point — Pediaa.Com

4: Fixed Point and Floating Point Number Representations
 */