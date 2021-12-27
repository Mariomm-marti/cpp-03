#ifndef CPP03_EX03_DIAMONDTRAP_H_
# define CPP03_EX03_DIAMONDTRAP_H_

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;
public:
	DiamondTrap(void);
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &copy);
	~DiamondTrap(void);

	DiamondTrap		&operator=(DiamondTrap const &rhs);

	void			attack(std::string const &target);
	void			whoAmI(void) const;
};

#endif
