#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "ClapTrap is mutating into a default FragTrap..." << std::endl;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "ClapTrap is mutating into a FragTrap named " << _name << std::endl;
	_health = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap fainted! Mutation effect fades and becomes again ClapTrap" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFivesGuys(void) const
{
	if (_health <= 0)
	{
		std::cout << _name << " tried to high five but it's dead!" << std::endl;
		return ;
	}
	std::cout << "FragTrap: hey guys! Let's high five!" << std::endl;
}
