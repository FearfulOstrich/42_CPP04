/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:41:36 by antoine           #+#    #+#             */
/*   Updated: 2022/10/06 18:50:42 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
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
	virtual void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Cat& obj);

#endif
