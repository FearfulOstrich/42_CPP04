/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:29:47 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 08:45:57 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Animal::Animal()
	: _type("")
{
	std::cout << "Animal Default Constructor called." << std::endl;
	return ;
}

Animal::Animal(std::string type)
	: _type(type)
{
	std::cout << "Animal Constructor with arg called." << std::endl;
	return ;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Animal& obj)
{
	os << "animal of type: " << obj.getType();
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

std::string	Animal::getType(void) const
{
	return (this->_type);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	Animal::makeSound(void) const
{
	std::cout << "GrrMeowWaouf..." << std::endl;
	return ;
}

void	Animal::tellThoughts(void) const
{
	std::cout << "I ain't got brain sorry." << std::endl;
	return ;
}
