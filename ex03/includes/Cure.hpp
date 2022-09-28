/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:15:09 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/28 15:48:33 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
private:

protected:

public:
	// Constructors
	Cure();
	Cure(const Cure& other);

	// Destructors
	virtual ~Cure();

	// Operator overload
	Cure&	operator=(const Cure& other);

	// Accessors (getters should return by value or const-reference)
	// Member functions
	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);
};

std::ostream&	operator<<(std::ostream& os, const Cure& obj);

#endif
