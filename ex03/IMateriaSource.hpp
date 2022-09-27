#ifndef _IMATERIASOURCE_HPP_
# define _IMATERIASOURCE_HPP_

# include <iostream>

class IMateriaSource
{
private:

protected:

public:
	// Constructors
	// Destructors
	virtual ~IMateriaSource() {}

	// Operator overload
	// Accessors (getters should return by value or const-reference)
	// Member functions
	virtual void		learnMateria(AMateria* m) = 0;
	virtual Materia*	createMateria(std::string const& type) const = 0;
};

#endif
