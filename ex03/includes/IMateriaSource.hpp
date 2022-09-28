/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:31:19 by aalleon           #+#    #+#             */
/*   Updated: 2022/09/28 15:48:54 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
private:

protected:

public:
	// Constructors
	// Destructors
	virtual ~IMateriaSource() {}

	// Operator overload
	// Accessors (getters should return by value or const-reference)
	// Member functions
	virtual void		learnMateria(AMateria* m) = 0;
	virtual AMateria*	createMateria(std::string const& type) const = 0;
};

#endif
