#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	a("test");

	a = ScavTrap("DEPRECATED A");
	a.attack("AWESOME B");
	a.takeDamage(99);
	a.beRepaired(1000);
	a.takeDamage(1000000);
	a.attack("AWESOME Z");
	a.guardGate();
}
