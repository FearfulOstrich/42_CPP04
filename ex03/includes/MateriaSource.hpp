/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:15:44 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/28 15:49:14 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria*	_learntMateria[4];
protected:

public:
	// Constructors
	MateriaSource();
	MateriaSource(const MateriaSource& other);

	// Destructors
	virtual ~MateriaSource();

	// Operator overload
	MateriaSource&	operator=(const MateriaSource& other);

	// Accessors (getters should return by value or const-reference)
	// Member functions
	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const& type) const;
};

std::ostream&	operator<<(std::ostream& os, const MateriaSource& obj);

#endif
