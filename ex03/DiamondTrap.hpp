#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScanTrap.cpp"

class DiamondTrap : public ScanTrap, public FragTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		// ClapTrap(const ClapTrap &ct);
		// ClapTrap &operator= (const ClapTrap &ct);
		//ScanTrap::attack();
		// void whoAmI();
	private:
		//std::string name;
};

#endif