#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name"), name("DiamondTrap")
{
	hit = FragTrap::hit;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
	hit = FragTrap::hit;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << "DiamondTrap destructor called" << std::endl;
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
		this->damage = dt.damage;
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
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap = " << name << std::endl;
	std::cout << "ClapTrap = " << ClapTrap::name << std::endl;
}