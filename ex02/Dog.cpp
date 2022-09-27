/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:58:48 by antoine           #+#    #+#             */
/*   Updated: 2022/09/27 11:44:37 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Dog::Dog(void)
	: AAnimal("Dog")
{
	std::cout << "Dog Default Constructor called." << std::endl;
	this->brain = new Brain();
	this->brain->setIdea(0, "Sleep.");
	this->brain->setIdea(1, "Play.");
	this->brain->setIdea(2, "Eat.");
	this->brain->setIdea(3, "Repeat.");
	return ;
}

Dog::Dog(const Dog& other)
{
	unsigned int	i;

	std::cout << "Dog Copy Constructor called." << std::endl;
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

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called." << std::endl;
	delete this->brain;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Dog& obj)
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

void	Dog::tellThoughts(void) const
{
	unsigned int	i;

	i = -1;
	while (++i < this->brain->getNIdea())
		std::cout << this->brain->getIdea(i) << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Waaf! Waf!" << std::endl;
	return ;
}
