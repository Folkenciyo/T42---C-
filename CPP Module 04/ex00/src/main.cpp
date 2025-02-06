/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:08:08 by juguerre          #+#    #+#             */
/*   Updated: 2025/01/28 11:08:08 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	WrongAnimal	*unknown = new WrongAnimal();
	Dog		*dog = new Dog();
    Cat    *cat = new Cat();

	std::cout << std::endl;
	std::cout << unknown->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;

	unknown->makeSound();
	dog->makeSound();
    cat->makeSound();
	std::cout << std::endl;
	delete unknown;

	std::cout << std::endl;
	unknown = new WrongCat();
	unknown->makeSound();
	std::cout << std::endl;
	delete dog;
    delete cat;
    delete unknown;
	std::cout << std::endl;
}