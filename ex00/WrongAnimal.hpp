/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:43:46 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 08:23:58 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
private:

protected:
	std::string	_type;

public:
	// Constructors
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& other);

	// Destructors
	virtual ~WrongAnimal();

	// Operator overload
	WrongAnimal&	operator=(const WrongAnimal& other);

	// Accessors (getters should return by value or const-reference)
	const std::string&	getType(void) const;

	// Member functions
	void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, const WrongAnimal& obj);

#endif
