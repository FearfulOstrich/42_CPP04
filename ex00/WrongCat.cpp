/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:41:12 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 08:44:46 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

WrongCat::WrongCat(void)
	: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor called." << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const WrongCat& obj)
{
	os << static_cast<const WrongAnimal&>(obj);
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

void	WrongCat::makeSound(void) const
{
	std::cout << "Meooow" << std::endl;
	return ;
}
