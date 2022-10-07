/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:29:38 by antoine           #+#    #+#             */
/*   Updated: 2022/10/06 18:51:24 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
private:

protected:
	std::string	_type;

public:
	// Constructors
	Animal();
	Animal(std::string type);
	Animal(const Animal& other);

	// Destructors
	virtual ~Animal();

	// Operator overload
	Animal&	operator=(const Animal& other);

	// Accessors (getters should return by value or const-reference)
	const std::string&	getType(void) const;

	// Member functions
	virtual void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Animal& obj);

#endif
