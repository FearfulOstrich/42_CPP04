#include "MateriaSource.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource Default Constructor called." << std::endl;
	for (int ix = 0; ix < 4; ix++)
		_learntMateria[ix] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	std::cout << "MateriaSource Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Destructor called." << std::endl;
	for (int ix =  0; ix < 4; ix++)
		if (this->_learntMateria[ix] != NULL)
			delete this->_learntMateria[ix];
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource assignment operator called." << std::endl;
	if (this != &other)
	{
		for (int ix = 0; ix < 4; ix++)
		{
			if (other._learntMateria[ix] != NULL)
				this->_learntMateria[ix] = other._learntMateria[ix]->clone();
			else
				this->_learntMateria[ix] = NULL;
		}
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const MateriaSource& obj)
{
	(void)obj;
	os << "[Materia Source]";
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

/*==============================================================================
	Setters.
==============================================================================*/

/*==============================================================================
	Member functions.
==============================================================================*/

void		MateriaSource::learnMateria(AMateria* m)
{
	int	ix;

	ix = 0;
	while (ix < 4 && this->_learntMateria[ix] != NULL)
		ix++;
	if (ix == 4)
	{
		std::cout << "No more materia can be learnt from this source.";
		std::cout << std::endl;
		delete m;
		return ;
	}
	this->_learntMateria[ix] = m->clone();
	delete m;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const& type) const
{
	for (int ix = 0; ix < 4; ix++)
	{
		if (this->_learntMateria[ix]->getType() == type)
			return (this->_learntMateria[ix]->clone());
	}
	std::cout << "Materia " << type << " unknown." << std::endl;
	return (NULL);
}