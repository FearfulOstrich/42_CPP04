#include "Brain.hpp"

/*==============================================================================
	Constructors.
==============================================================================*/

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called." << std::endl;
	return ;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy Constructor called." << std::endl;
	*this = other;
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called." << std::endl;
	return ;
}

/*==============================================================================
	Operator overloads.
==============================================================================*/

Brain&	Brain::operator=(const Brain& other)
{
	unsigned int	i;

	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &other)
	{
		i = -1;
		while (++i < 100)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Brain& obj)
{
	os << "Brain with " << obj.getNIdea() << "ideas";
	return (os);
}

/*==============================================================================
	Getters.
==============================================================================*/

std::string	Brain::getIdea(unsigned int ix) const
{
	if (ix >= this->n_ideas)
		return ("No idea at this index.");
	return (this->ideas[ix]);
}

unsigned int	Brain::getNIdea(void) const
{
	return (this->n_ideas);
}

/*==============================================================================
	Setters.
==============================================================================*/

void	Brain::setIdea(unsigned int ix,std::string idea)
{
	if (ix > 99)
		return ;
	this->ideas[ix] = idea;
	this->n_ideas++;
	return ;
}

/*==============================================================================
	Member functions.
==============================================================================*/
