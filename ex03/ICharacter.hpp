/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:14:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/27 15:14:57 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class ICharacter
{
private:

protected:

public:
	// Constructors
	// Destructors
	virtual ~ICharacter() {}

	// Operator overload
	// Accessors (getters should return by value or const-reference)
	virtual std::string const&	getName() const = 0;

	// Member functions
	virtual void	equip(AMateria* m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter& target) = 0;
};

#endif
