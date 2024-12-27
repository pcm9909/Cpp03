#ifndef SCANTRAP_HPP
# define SCANTRAP_HPP

#include "ClapTrap.hpp"

class ScanTrap : virtual public ClapTrap
{
	public:
		ScanTrap();
		ScanTrap(std::string name);
		ScanTrap(const ScanTrap &st);
		ScanTrap &operator= (const ScanTrap &st);
		~ScanTrap();

		void attack(const std::string& target);
		void guardGate();
};

#endif