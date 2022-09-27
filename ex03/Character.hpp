#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include <iostream>

class Character: public ICharacter
{
private:
	std::string	_name;
	AMateria*	_inventory[4];

protected:

public:
	// Constructors
	Character(const std::string& name);
	Character(const Character& other);

	// Destructors
	virtual ~Character();

	// Operator overload
	Character&	operator=(const Character& other);

	// Accessors (getters should return by value or const-reference)
	virtual std::string const&	getName() const;

	// Member functions
	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);
};

std::ostream&	operator<<(std::ostream& os, const Character& obj);

#endif
