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


#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int	main() {
	AAnimal	*array[100];
	int		i = 0;

	while (i < 50){
		std::cout << "\033[4;37mCreating Dog\033[0m \033[37m" << i + 1 << "\033[0m" << std::endl;
		array[i++] = new Dog();
		std::cout << std::endl;
	}
	while (i < 100){
		std::cout << "\033[4;37mCreating Cat\033[0m \033[37m" << i + 1 << "\033[0m" << std::endl;
		array[i++] = new Cat();
		std::cout << std::endl;
	}

	array[4]->makeSound();
	array[4]->think();
	array[72]->makeSound();
	array[4]->think();
	std::cout << std::endl;


	for (i = 0; i < 100; i++)
        delete array[i];
	return 0;
}