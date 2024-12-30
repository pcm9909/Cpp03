#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &ct);
		DiamondTrap &operator= (const DiamondTrap &ct);
		void attack(const std::string& target);
		void whoAmI();
	private:
		std::string name;
};

#endif
