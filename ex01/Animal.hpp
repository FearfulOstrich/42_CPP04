/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:29:38 by antoine           #+#    #+#             */
/*   Updated: 2022/09/08 18:37:14 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>

class Animal
{
private:

protected:
	std::string	type;

public:
	// Constructors
	Animal();
	Animal(std::string type);
	Animal(const Animal& other);

	// Destructors
	virtual	~Animal();

	// Operator overload
	virtual Animal&	operator=(const Animal& other);

	// Accessors (getters should return by value or const-reference)
	std::string	getType(void) const;

	// Member functions
	virtual void	makeSound(void) const;
	virtual void	tellThoughts(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Animal& obj);

#endif
