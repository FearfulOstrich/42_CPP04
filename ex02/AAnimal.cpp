/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:36:47 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/27 11:36:48 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

AAnimal::AAnimal()
	: type("")
{
	std::cout << "AAnimal Default Constructor called." << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type)
	: type(type)
{
	std::cout << "AAnimal Constructor with arg called." << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "AAnimal Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const AAnimal& obj)
{
	os << "Aanimal of type: " << obj.getType();
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/
