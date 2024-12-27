#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(name), FragTrap(name), ScanTrap(name)
{
	;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}