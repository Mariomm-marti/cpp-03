#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Actually... It's not a ClapTrap but a DEFAULT SCAVTRAP!" << std::endl;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "Actually... It's not a ClapTrap but a ScavTrap named " << _name << std::endl;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Bye bye ScavTrap... Become a ClapTrap again!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	ScavTrap::attack(std::string const &target)
{
	if (_energy == 0)
	{
		std::cout << _name << " wanted to attack... But was out of attack points!" << std::endl;
		return ;
	}
	if (_health == 0)
	{
		std::cout << _name << " wanted to attack... But as a dead trap it is an impossible task!" << std::endl;
		return ;
	}
	std::cout << "The ScavTrap " << _name << " attacked " << target << std::endl;
	_energy--;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << _name << " started watching the Dimension Gate" << std::endl;
}
