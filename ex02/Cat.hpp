/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:41:36 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 09:02:35 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain*	_brain;

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
	Brain*	getBrain(void) const;

	// Member functions
	void	tellThoughts(void) const;
	void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Cat& obj);

#endif
