/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:57:45 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/27 17:40:20 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Character::Character(const std::string& name)
	: _name(name)
	, _inventory({NULL, NULL, NULL, NULL})
{
	std::cout << "Character Default Constructor called." << std::endl;
	return ;
}

Character::Character(const Character& other)
{
	std::cout << "Character Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Character::~Character(void)
{
	std::cout << "Character Destructor called." << std::endl;
	for (int ix = 0; ix < 4; ix++)
		if (this->_inventory[ix] != NULL)
			delete this->_inventory[ix];
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Character&	Character::operator=(const Character& other)
{
	std::cout << "Character assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		for (int ix = 0; ix < 4; ix++)
		{
			if (other._inventory[ix] != NULL)
				this->_inventory[ix] = other._inventory[ix]->clone();
			else
				this->_inventory[ix] = NULL;
		}
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Character& obj)
{
	os << "[Character " << obj.getName() << "]";
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

std::string const&	getName() const
{
	return (this->_name);
}

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void	equip(AMateria* m)
{
	unsigned int	i;
	
	i = 0;
	while (this->_inventory[i] != NULL)
	{
		i++;
		if (i == 4)
		{
			std::cout << "Inventory Full. Unequip before equiping new item.";
			std::cout << std::endl;
			return ;
		}
	}
	this->_inventory[i] = m;
	return ;
}

void	unequip(int idx)
{
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "No item equipped in slot " << idx << "." << std::endl;
		return ;
	}
	std::cout << *this << " dropped " << *(this->_inventory[idx]) << std::endl;
	this->_inventory[idx] = NULL;
	return ;
}

void	use(int idx, ICharacter& target)
{
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "No item equipped in slot " << idx << "." << std::endl;
		return ;
	}
	std::cout << *this << " used " << *(this->_inventory[idx]) << std::endl;
	this->_inventory[idx]->use(target);
	delete (this->_inventory[idx]);
	this->_inventory[idx] = NULL;
	return ;
}
