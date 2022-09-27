#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <iostream>

class Brain
{
private:
	unsigned int	n_ideas;
	std::string		ideas[100];

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
	void			setIdea(unsigned int ix, std::string idea);

	// Member functions
};

std::ostream&	operator<<(std::ostream& os, const Brain& obj);

#endif
