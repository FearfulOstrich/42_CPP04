/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:43:13 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 08:44:28 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

WrongAnimal::WrongAnimal()
	: _type("")
{
	std::cout << "WrongAnimal Default Constructor called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type)
	: _type(type)
{
	std::cout << "WrongAnimal Constructor with arg called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const WrongAnimal& obj)
{
	os << "animal of type: " << obj.getType();
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

const std::string&	WrongAnimal::getType(void) const
{
	return (this->_type);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	WrongAnimal::makeSound(void) const
{
	std::cout << "GrrMeowWaouf..." << std::endl;
	return ;
}
