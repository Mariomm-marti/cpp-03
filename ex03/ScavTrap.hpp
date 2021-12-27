#ifndef CPP03_EX01_SCAVTRAP_H_
# define CPP03_EX01_SCAVTRAP_H_

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);
	
	void		attack(std::string const &target);
	void		guardGate(void) const;
};

#endif
