/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:58:48 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 08:44:09 by antoine          ###   ########.fr       */
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

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	Dog::makeSound(void) const
{
	std::cout << "Waaf! Waf!" << std::endl;
	return ;
}
