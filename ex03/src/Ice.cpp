/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:59:44 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/27 15:00:03 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Ice::Ice(void)
	: AMateria("ice")
{
	std::cout << "Ice Default Constructor called." << std::endl;
	return ;
}

Ice::Ice(const Ice& other)
	: AMateria(other)
{
	std::cout << "Ice Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << "Ice assignment operator called." << std::endl;
	if (this != &other)
	{
		// Copy all attributes
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Ice& obj)
{
	os << static_cast<const AMateria&>(obj);
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

AMateria*	Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* Shoots an ice ball at ";
	std::cout << target.getName();
	std::cout << " *" << std::endl;
	return ;
}