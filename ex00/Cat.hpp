/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:41:36 by antoine           #+#    #+#             */
/*   Updated: 2022/09/07 10:48:28 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
private:
	std::string	type;
protected:

public:
	// Constructors
	Cat();
	Cat(const Cat& other);

	// Destructors
	virtual ~Cat();

	// Operator overload
	Cat&	operator=(const Cat& other);

	// Accessors (getters should return by value or const-reference)

	// Member functions
	void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Cat& obj);

#endif
