/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:58:58 by antoine           #+#    #+#             */
/*   Updated: 2022/09/07 10:49:46 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int	main()
{
	{
		const Animal*	animal = new Animal();
		const Animal*	dog = new Dog();
		const Animal*	cat = new Cat();

		std::cout << "animal getType : " << animal->getType() << std::endl;
		std::cout << "dog getType : " << dog->getType() << std::endl;
		std::cout << "cat getType : " << cat->getType() << std::endl;

		animal->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete animal;
		delete cat;
		delete dog;
	}
	{
		const WrongAnimal*	wrong_animal = new WrongAnimal();
		const WrongAnimal*	wrong_cat = new WrongCat();
		const WrongCat*	true_cat = new WrongCat();

		std::cout << "wrong_animal getType : " << wrong_animal->getType() << std::endl;
		std::cout << "wrong_cat getType : " << wrong_cat->getType() << std::endl;
		std::cout << "true_cat getType : " << true_cat->getType() << std::endl;

		wrong_animal->makeSound();
		wrong_cat->makeSound();
		true_cat->makeSound();

		delete wrong_animal;
		delete wrong_cat;
		delete true_cat;
	}
}
