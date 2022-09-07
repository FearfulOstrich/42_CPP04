/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:41:29 by antoine           #+#    #+#             */
/*   Updated: 2022/09/07 10:29:41 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

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
	void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, const WrongCat& obj);

#endif
