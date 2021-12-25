#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	fragTrap;
	FragTrap	alt;
	
	fragTrap = FragTrap();
	fragTrap = FragTrap("AWESOME fragTrap");
	fragTrap.highFivesGuys();
	alt = fragTrap;

	alt.beRepaired(100);
	fragTrap.beRepaired(101);
	alt.takeDamage(199);
	fragTrap.takeDamage(300);
	fragTrap.highFivesGuys();
	alt.highFivesGuys();
}
