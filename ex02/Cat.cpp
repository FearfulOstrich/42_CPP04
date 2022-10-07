/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:34:08 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 09:02:59 by antoine          ###   ########.fr       */
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
	this->_brain = new Brain();
	this->_brain->setIdea("Eat mice.");
	this->_brain->setIdea("Sleep.");
	this->_brain->setIdea("Kill my master.");
	return ;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat Copy Constructor called." << std::endl;
	this->_brain = new Brain();
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called." << std::endl;
	delete this->_brain;
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
		this->_type = other.getType();
		*(this->_brain) = *other.getBrain();
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

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}

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
	while (++i < this->_brain->getNIdea())
		std::cout << this->_brain->getIdea(i) << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meooow" << std::endl;
	return ;
}
