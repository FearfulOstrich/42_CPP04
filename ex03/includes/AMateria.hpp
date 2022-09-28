/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:19:31 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/28 16:01:25 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:

protected:
	std::string	_type;

public:
	// Constructors
	AMateria(const std::string& type);
	AMateria(const AMateria& other);

	// Destructors
	virtual ~AMateria();

	// Operator overload
	AMateria&	operator=(const AMateria& other);

	// Accessors (getters should return by value or const-reference)
	std::string const &	getType(void) const;

	// Member functions
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target) = 0;
};

std::ostream&	operator<<(std::ostream& os, const AMateria& obj);

#endif
