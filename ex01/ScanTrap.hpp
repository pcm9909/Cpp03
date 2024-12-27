#ifndef SCANTRAP_HPP
# define SCANTRAP_HPP

#include "ClapTrap.hpp"

class ScanTrap : public ClapTrap
{
	public:
		ScanTrap(std::string name);
		~ScanTrap();
		ScanTrap(const ScanTrap &st);
		ScanTrap &operator= (const ScanTrap &st);
		void attack(const std::string& target);
		void guardGate();
};

#endif