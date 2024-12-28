#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hit(10), energy(10), damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit(10), energy(10), damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = ct;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	if(this != &ct)
	{
		this->name = ct.name;
		this->hit = ct.hit;
		this->energy = ct.energy;
		this->damage = ct.damage;
		std::cout << "ClapTrap Assignation Operator called" << std::endl;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->energy > 0 && this->hit > 0)
	{
		this->energy -= 1;
		std::cout << name
				  << " attacks " << target
				  << " causing " << damage
				  << " points of damage!" << std::endl;
	}
	if(this->energy <= 0)
	{
		std::cout << "lack of Energy" << std::endl;
	}
	if(this->hit <= 0)
	{
		std::cout << "Trap Destroyed" << std::endl;
	}

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->hit > 0)
	{
		this->hit -= amount;
		std::cout << name
				  << " take " << amount
				  << " Damage!" << std::endl;
	}
	if(this->hit <= 0)
	{
		std::cout << "Trap Destroyed" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energy > 0 && this->hit > 0)
	{
		this->hit += amount;
		this->energy -= 1;
		std::cout << name
				  << " be repaired " << amount
				  << " points!" << std::endl;
	}
	if(this->energy <= 0)
	{
		std::cout << "lack of Energy" << std::endl;
	}
	if(this->hit <= 0)
	{
		std::cout << "Trap Destroyed" << std::endl;
	}
}

void ClapTrap::showStat()
{
	std::cout << "[name] " << name << std::endl;
	std::cout << "[hit] " << hit << std::endl;
	std::cout << "[energy] " << energy << std::endl;
	std::cout << "[damage] " << damage << std::endl;
}

