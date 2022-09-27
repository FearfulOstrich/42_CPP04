/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:34:08 by antoine           #+#    #+#             */
/*   Updated: 2022/09/27 11:44:27 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Cat::Cat(void)
	: AAnimal("Cat")
{
	std::cout << "Cat Default Constructor called." << std::endl;
	this->brain = new Brain();
	this->brain->setIdea(0, "Eat mice.");
	this->brain->setIdea(1, "Sleep.");
	this->brain->setIdea(2, "Kill my master.");
	return ;
}

Cat::Cat(const Cat& other)
{
	unsigned int	i;

	std::cout << "Cat Copy Constructor called." << std::endl;
	*this = other;
	this->brain = new Brain();
	i = -1;
	while (++i < other.brain->getNIdea())
		this->brain->setIdea(i, other.brain->getIdea(i));
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called." << std::endl;
	delete this->brain;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Cat& obj)
{
	os << static_cast<const AAnimal&>(obj);
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	Cat::tellThoughts(void) const
{
	unsigned int	i;

	i = -1;
	while (++i < this->brain->getNIdea())
		std::cout << this->brain->getIdea(i) << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooow" << std::endl;
	return ;
}
