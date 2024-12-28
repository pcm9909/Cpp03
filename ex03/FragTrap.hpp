#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &ct);
		FragTrap &operator= (const FragTrap &ct);
		void highFivesGuys(void);
	private:
		std::string name;
};

#endif