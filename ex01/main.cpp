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
	Animal*	kennel = new Animal[6];

	kennel[0] = Cat();
	kennel[1] = Cat();
	kennel[2] = Dog();
	kennel[3] = Cat();
	kennel[4] = Dog();
	kennel[5] = Dog();

	for (int i = 0; i < 6; i++)
	{
		std::cout << "[" << kennel[i].getType() << "]" << std::endl;
		kennel[i].makeSound();
		kennel[i].tellThoughts();
	}

	delete[] kennel;
}
