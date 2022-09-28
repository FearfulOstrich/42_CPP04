/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:19:20 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/27 15:00:36 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

AMateria::AMateria(const std::string& type)
	: _type(type)
{
	std::cout << "AMateria Default Constructor called." << std::endl;
	return ;
}

AMateria::AMateria(const AMateria& other)
{
	std::cout << "AMateria Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

AMateria&	AMateria::operator=(const AMateria& other)
{
	std::cout << "AMateria assignment operator called." << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const AMateria& obj)
{
	os << "[" << obj.getType() << " materia]";
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

std::string const &	AMateria::getType(void) const
{
	return (this->_type);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/
