#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit(10), energy(10), damge(0)
{
	std::cout << name << " Created !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " Destroyed !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = ct;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	if(this != &ct)
	{
		this->name = ct.name;
		this->hit = ct.hit;
		this->energy = ct.energy;
		this->damge = ct.damge;
		std::cout << "Assignation Operator Called" << std::endl;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->energy > 0 && this->hit > 0)
	{
		this->energy -= -1;
		std::cout << "ClapTrap " << name
				  << " attacks " << target
				  << " causing " << damge
				  << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "lack of Energy" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->energy > 0 && this->hit > 0)
	{
		this->hit -= amount;
		this->energy -= -1;
		std::cout << "ClapTrap " << name
				  << " take " << amount
				  << " points!" << std::endl;
	}
	else
	{
		std::cout << "lack of Energy" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy > 0 && this->hit > 0)
	{
		this->hit += amount;
		this->energy -= -1;
		std::cout << "ClapTrap " << name
				  << " be repaired " << amount
				  << " points!" << std::endl;
	}
	else
	{
		std::cout << "lack of Energy" << std::endl;
	}
}
