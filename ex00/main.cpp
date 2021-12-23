#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	a("Awesome A");
	ClapTrap	b;

	b = ClapTrap("Deprecated B");
	a.attack("Dummy");
	b.attack("Dummy");

	a.takeDamage(5);
	a.takeDamage(4);
	a.takeDamage(10);
	b.takeDamage(11);

	b = ClapTrap("Philanthropist B");
	a.beRepaired(10);
	b.beRepaired(100);
	b.takeDamage(109);
}
