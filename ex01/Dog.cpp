/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:58:48 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 08:48:57 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Dog::Dog(void)
	: Animal("Dog")
{
	std::cout << "Dog Default Constructor called." << std::endl;
	this->_brain = new Brain();
	this->_brain->setIdea("Sleep.");
	this->_brain->setIdea("Play.");
	this->_brain->setIdea("Eat.");
	this->_brain->setIdea("Repeat.");
	return ;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called." << std::endl;
	delete this->_brain;
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
		this->_type = other.getType();
		this->_brain = new Brain();
		*this->_brain = *other._brain;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Dog& obj)
{
	os << static_cast<const Animal&>(obj);
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}

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
	while (++i < this->_brain->getNIdea())
		std::cout << this->_brain->getIdea(i) << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Waaf! Waf!" << std::endl;
	return ;
}
