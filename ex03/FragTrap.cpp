#include "FragTrap.hpp"

FragTrap::FragTrap() : name("FragTrap")
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : name(name)
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
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
		this->damage = ft.damage;
		std::cout << "Assignation Operator Called" << std::endl;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Hey, give me a high five!" << std::endl;
}