#ifndef SCANTRAP_HPP
# define SCANTRAP_HPP

#include "ClapTrap.hpp"

class ScanTrap : public ClapTrap
{
	public:
		ScanTrap();
		~ScanTrap();
		ScanTrap(const ScanTrap &ct);
		ScanTrap &operator= (const ScanTrap &ct);
	private

};

#endif