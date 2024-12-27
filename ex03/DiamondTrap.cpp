#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("ClapTrap_clap_name"), FragTrap("FragTrap"), ScanTrap("ScanTrap")
{
	name = "DiamondTrap";
	hit = FragTrap::hit;
	energy = ScanTrap::energy;
	damge = FragTrap::damge;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"), FragTrap(_name), ScanTrap(_name)
{
	name = _name;
	hit = FragTrap::hit;
	energy = ScanTrap::energy;
	damge = FragTrap::damge;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt) : ClapTrap(dt.name)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = dt;
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dt)
{
	if(this != &dt)
	{
		this->name = dt.name;
		this->hit = dt.hit;
		this->energy = dt.energy;
		this->damge = dt.damge;
		std::cout << "Assignation Operator Called" << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}


void DiamondTrap::attack(const std::string& target)
{
	ScanTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap = " << name << std::endl;
	std::cout << "ClapTrap = " << ClapTrap::name << std::endl;
}