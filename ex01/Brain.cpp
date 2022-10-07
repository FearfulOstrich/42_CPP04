/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:33:03 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 09:05:42 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Brain::Brain(void)
	: _n_idea(0)
{
	std::cout << "Brain Default Constructor called." << std::endl;
	return ;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Brain&	Brain::operator=(const Brain& other)
{
	unsigned int	i;

	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_n_idea = other.getNIdea();
		i = -1;
		while (++i < this->_n_idea)
			this->_ideas[i] = other.getIdea(i);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Brain& obj)
{
	os << "Brain with " << obj.getNIdea() << "ideas";
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

std::string	Brain::getIdea(unsigned int ix) const
{
	if (ix >= this->_n_idea)
		return ("No idea at this index.");
	return (this->_ideas[ix]);
}

unsigned int	Brain::getNIdea(void) const
{
	return (this->_n_idea);
}

/*==============================================================================
	Setters.
==============================================================================*/

void	Brain::setIdea(std::string idea)
{
	if (this->_n_idea == 100)
		return ;
	this->_ideas[this->_n_idea] = idea;
	this->_n_idea++;
	return ;
}

/*==============================================================================
	Member functions.
==============================================================================*/
