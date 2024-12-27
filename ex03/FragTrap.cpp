#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
	name = "default";
	hit = 100;
	energy = 100;
	damge = 30;
	std::cout << "ScanTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hit = 100;
	energy = 100;
	damge = 30;
	std::cout << "ScanTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "ScanTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft.name)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = ft;
}


FragTrap &FragTrap::operator=(const FragTrap &ft)
{
	if(this != &ft)
	{
		this->name = ft.name;
		this->hit = ft.hit;
		this->energy = ft.energy;
		this->damge = ft.damge;
		std::cout << "Assignation Operator Called" << std::endl;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Hey, give me a high five!" << std::endl;
}