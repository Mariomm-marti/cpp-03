#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap	test("testing this");

	test.whoAmI();
	test.attack("random");
	test.takeDamage(101);
	test.beRepaired(400);
	test = DiamondTrap("DTRAP");
	for (size_t i = 0; i < 100; i++)
		test.attack("new foe");
	test.attack("new foe");
}
