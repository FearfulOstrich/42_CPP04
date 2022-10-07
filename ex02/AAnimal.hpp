/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:36:21 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/07 09:00:17 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>

class AAnimal
{
private:

protected:
	std::string	_type;

	// Constructors
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& other);

public:
	// Destructors
	virtual	~AAnimal();

	// Operator overload
	virtual AAnimal&	operator=(const AAnimal& other);

	// Accessors (getters should return by value or const-reference)
	std::string	getType(void) const;

	// Member functions
	virtual void	makeSound(void) const = 0;
	virtual void	tellThoughts(void) const = 0;
};

std::ostream&	operator<<(std::ostream& os, const AAnimal& obj);

#endif
