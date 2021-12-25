#ifndef CPP03_EX02_FRAGTRAP_H_
# define CPP03_EX02_FRAGTRAP_H_

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &copy);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);
	
	void		highFivesGuys(void) const;
};

#endif
