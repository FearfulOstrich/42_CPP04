/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:43:46 by antoine           #+#    #+#             */
/*   Updated: 2022/09/07 10:29:53 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

# include <iostream>

class WrongAnimal
{
private:

protected:
	std::string	type;

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
