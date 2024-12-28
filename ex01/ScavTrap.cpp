#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : name("ScavTrap")
{
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : name(name)
{
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st.name)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = st;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
	if(this != &st)
	{
		this->name = st.name;
		this->hit = st.hit;
		this->energy = st.energy;
		this->damage = st.damage;
		std::cout << "Assignation Operator Called" << std::endl;
	}
	return *this;
}


void ScavTrap::attack(const std::string& target)
{
	if(this->energy > 0 && this->hit > 0)
	{
		this->energy -= 1;
		std::cout << "[ScavTrap] " << name
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

 void ScavTrap::guardGate()
 {
    std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}