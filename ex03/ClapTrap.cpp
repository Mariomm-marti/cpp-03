#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) : _name("Default"), _health(10), _energy(10), _attack(0)
{
	std::cout << "A default ClapTrap just spawned!" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "A new ClapTrap called " << _name << " spawned!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Bye bye ClapTrap!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs.getName();
	_health = rhs.getHealth();
	_energy = rhs.getEnergy();
	_attack = rhs.getAttack();
	return *this;
}

std::string const	&ClapTrap::getName(void) const
{
	return _name;
}

int const	&ClapTrap::getHealth(void) const
{
	return _health;
}

int const	&ClapTrap::getEnergy(void) const
{
	return _energy;
}

int const	&ClapTrap::getAttack(void) const
{
	return _attack;
}

void	ClapTrap::attack(std::string const &target)
{
	if (_energy == 0)
	{
		std::cout << _name << " wanted to attack... But was out of stamina!" << std::endl;
		return ;
	}
	if (_health == 0)
	{
		std::cout << _name << " wanted to attack... But as a ghost it is an impossible task!" << std::endl;
		return ;
	}
	std::cout << _name << " attacked " << target << ", dealing " << _attack << " points of damage!" << std::endl;
	_energy--;
}

void	ClapTrap::takeDamage(unsigned int const amount)
{
	if ((int)(_health - amount) > 0)
	{
		std::cout << _name << " lost " << amount << "HP, with only " << _health - amount << "HP left!" << std::endl;
		_health = _health - amount;
		return ;
	}
	std::cout << _name << " passed away after receiving " << amount << "HP damage" << std::endl;
	_health = 0;
}

void	ClapTrap::beRepaired(unsigned int const amount)
{
	if (_energy == 0)
	{
		std::cout << _name << " wanted to repair... But was out of stamina!" << std::endl;
		return ;
	}
	if (_health == 0)
	{
		std::cout << _name << " wanted to repair... But as a ghost it is an impossible task!" << std::endl;
		return ;
	}
	std::cout << _name << " got back " << amount << "HP as a result of repairing! The current health is " << _health + amount << "HP!" << std::endl;
	_health = _health + amount;
	_energy--;
}
