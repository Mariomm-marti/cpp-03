#ifndef CPP03_EX01_CLAPTRAP_H_
# define CPP03_EX01_CLAPTRAP_H_

# include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack;

public:
	ClapTrap(void);
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap(void);

	ClapTrap			&operator=(ClapTrap const &rhs);
	std::string const	&getName(void) const;
	int const			&getHealth(void) const;
	int const			&getEnergy(void) const;
	int const			&getAttack(void) const;

	void				attack(std::string const &target);
	void				takeDamage(unsigned int const amount);
	void				beRepaired(unsigned int const amount);
};

#endif
