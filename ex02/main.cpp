#include "FragTrap.hpp"

int main()
{
	FragTrap ft("hi");
	FragTrap f1 = ft;
	FragTrap f2(ft);
	f1.highFivesGuys();
}