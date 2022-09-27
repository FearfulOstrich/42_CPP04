#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

# include <iostream>

class MateriaSource
{
private:
	AMateria*	_learntMateria[4];
protected:

public:
	// Constructors
	MateriaSource();
	MateriaSource(const MateriaSource& other);

	// Destructors
	virtual ~MateriaSource();

	// Operator overload
	MateriaSource&	operator=(const MateriaSource& other);

	// Accessors (getters should return by value or const-reference)
	// Member functions
	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const& type) const;
};

std::ostream&	operator<<(std::ostream& os, const MateriaSource& obj);

#endif
