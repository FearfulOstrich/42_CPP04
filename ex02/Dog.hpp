/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalleon <aalleon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:58:53 by antoine           #+#    #+#             */
/*   Updated: 2022/09/27 11:44:14 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	std::string	type;
	Brain*		brain;

protected:

public:
	// Constructors
	Dog();
	Dog(const Dog& other);

	// Destructors
	virtual ~Dog();

	// Operator overload
	Dog&	operator=(const Dog& other);

	// Accessors (getters should return by value or const-reference)

	// Member functions
	void	tellThoughts(void) const;
	void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Dog& obj);

#endif
