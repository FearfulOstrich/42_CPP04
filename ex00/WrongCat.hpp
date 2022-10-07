/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:41:29 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 08:24:05 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

protected:

public:
	// Constructors
	WrongCat();
	WrongCat(const WrongCat& other);

	// Destructors
	virtual ~WrongCat();

	// Operator overload
	WrongCat&	operator=(const WrongCat& other);

	// Accessors (getters should return by value or const-reference)

	// Member functions
	virtual void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, const WrongCat& obj);

#endif
