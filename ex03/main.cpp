#include "DiamondTrap.hpp"

int main()
{
	std::cout << "생성자()" << std::endl;
	DiamondTrap dt1;
	std::cout << std::endl;

	std::cout << "생성자(string)" << std::endl;
	DiamondTrap dt2("hi");
	std::cout << std::endl;

	std::cout << "복사 생성자" << std::endl;
	DiamondTrap dt3(dt1);
	std::cout << std::endl;

	std::cout << "복사 대입 연산자" << std::endl;
	DiamondTrap dt4 = dt2;
	std::cout << std::endl;

	std::cout << "attack(target)" << std::endl;
	dt1.attack("target");
	dt1.showStat();
	for(int i = 0; i < 11; i++)
	{
		dt1.attack("target");
	}
	dt1.showStat();
	std::cout << std::endl;

	std::cout << "beRepaired()" << std::endl;
	dt1.beRepaired(10);
	dt1.showStat();
	std::cout << std::endl;

	std::cout << "takeDamage()" << std::endl;
	dt2.takeDamage(60);
	dt2.showStat();
	dt2.takeDamage(60);
	dt2.showStat();
	std::cout << std::endl;

	std::cout << "whoAmI()" << std::endl;
	dt1.whoAmI();
	dt2.whoAmI();
	std::cout << std::endl;


	return 0;
}