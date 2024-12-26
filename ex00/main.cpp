#include "ClapTrap.hpp"

int main()
{
	ClapTrap hi("hi");
	ClapTrap bye(hi);
	hi.beRepaired(10);

	hi.attack("asd");
}