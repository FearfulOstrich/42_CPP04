/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:57:51 by antoine           #+#    #+#             */
/*   Updated: 2022/09/08 15:03:55 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Animal**	kennel = new Animal*[6];

	kennel[0] = new Cat();
	std::cout << std::endl;
	kennel[1] = new Cat();
	std::cout << std::endl;
	kennel[2] = new Dog();
	std::cout << std::endl;
	kennel[3] = new Cat();
	std::cout << std::endl;
	kennel[4] = new Dog();
	std::cout << std::endl;
	kennel[5] = new Dog();
	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
	{
		std::cout << "[" << kennel[i]->getType() << "]" << std::endl;
		kennel[i]->makeSound();
		kennel[i]->tellThoughts();
		std::cout << std::endl;
	}

	for (int i = 0; i < 6; i++)
		delete kennel[i];
	delete[] kennel;
}
