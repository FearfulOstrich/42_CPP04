/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:59:49 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/27 15:35:44 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice: public AMateria
{
private:

protected:

public:
	// Constructors
	Ice();
	Ice(const Ice& other);

	// Destructors
	virtual ~Ice();

	// Operator overload
	Ice&	operator=(const Ice& other);

	// Accessors (getters should return by value or const-reference)
	// Member functions
	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);
};

std::ostream&	operator<<(std::ostream& os, const Ice& obj);

#endif
