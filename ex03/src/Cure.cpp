/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:21:16 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/28 12:21:18 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Cure::Cure(void)
	: AMateria("cure")
{
	std::cout << "Cure Default Constructor called." << std::endl;
	return ;
}

Cure::Cure(const Cure& other)
	: AMateria(other)
{
	std::cout << "Cure Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Cure::~Cure(void)
{
	std::cout << "Cure Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Cure&	Cure::operator=(const Cure& other)
{
	std::cout << "Cure assignment operator called." << std::endl;
	if (this != &other)
	{
		// Copy all attributes
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Cure& obj)
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

AMateria*	Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* Heal's ";
	std::cout << target.getName();
	std::cout << "'s wounds *" << std::endl;
	return ;
}