#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout << "Now... That's weird. It is not a ScavTrap, neither a FragTrap... IT'S A DIAMONDTRAP!!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(ClapTrap::_name)
{
	std::cout << "Now... Things are getting weird. It is not a ScavTrap, or FragTrap... It's a " << _name << " DiamondTrap!!" << std::endl;
	ClapTrap::_name += "_clap_name";
	_health = FragTrap::_health;
	_energy = ScavTrap::_energy;
	_attack = FragTrap::_attack;
	std::cout << "Health: " << _health << std::endl;
	std::cout << "Energy: " << _energy << std::endl;
	std::cout << "Attack: " << _attack << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "The polymorphed DiamondTrap " << _name << " unshaped into ScavTraps and FragTraps" << std::endl;
}

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	ScavTrap::operator=(rhs);
	FragTrap::operator=(rhs);
	return *this;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "As a DiamondTrap, you are " << _name << "... But when you are a ClapTrap. You are " << ClapTrap::_name << std::endl;
}
