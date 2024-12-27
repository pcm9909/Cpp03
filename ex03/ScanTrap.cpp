#include "ScanTrap.hpp"

ScanTrap::ScanTrap() : ClapTrap("default")
{
	name = "default";
	hit = 100;
	energy = 50;
	damge = 20;
	std::cout << "ScanTrap constructor called" << std::endl;
}

ScanTrap::ScanTrap(std::string name) : ClapTrap(name)
{
	hit = 100;
	energy = 50;
	damge = 20;
	std::cout << "ScanTrap constructor called" << std::endl;
}

ScanTrap::~ScanTrap()
{
	std::cout << "ScanTrap destructor called" << std::endl;
}

ScanTrap::ScanTrap(const ScanTrap &st) : ClapTrap(st.name)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = st;
}


ScanTrap &ScanTrap::operator=(const ScanTrap &st)
{
	if(this != &st)
	{
		this->name = st.name;
		this->hit = st.hit;
		this->energy = st.energy;
		this->damge = st.damge;
		std::cout << "Assignation Operator Called" << std::endl;
	}
	return *this;
}


void ScanTrap::attack(const std::string& target)
{
	if(this->energy > 0 && this->hit > 0)
	{
		this->energy -= -1;
		std::cout << "ScanTrap " << name
				  << " attacks " << target
				  << " causing " << damge
				  << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "lack of Energy" << std::endl;
	}
}

 void ScanTrap::guardGate()
 {
    std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}