/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:33:00 by antoine           #+#    #+#             */
/*   Updated: 2022/10/07 08:35:58 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	unsigned int	_n_idea;
	std::string		_ideas[100];

protected:

public:
	// Constructors
	Brain();
	Brain(const Brain& other);

	// Destructors
	~Brain();

	// Operator overload
	Brain&	operator=(const Brain& other);

	// Accessors (getters should return by value or const-reference)
	std::string		getIdea(unsigned int ix) const;
	unsigned int	getNIdea(void) const;
	void			setIdea(std::string idea);

	// Member functions
};

std::ostream&	operator<<(std::ostream& os, const Brain& obj);

#endif
