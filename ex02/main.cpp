#include "FragTrap.hpp"

int main()
{
	std::cout << "생성자()" << std::endl;
	FragTrap ft1;
	std::cout << std::endl;

	std::cout << "생성자(string)" << std::endl;
	FragTrap ft2("hi");
	std::cout << std::endl;

	std::cout << "복사 생성자" << std::endl;
	FragTrap ft3(ft1);
	std::cout << std::endl;

	std::cout << "복사 대입 연산자" << std::endl;
	FragTrap ft4 = ft2;
	std::cout << std::endl;

	std::cout << "attack(target)" << std::endl;
	ft1.attack("target");
	ft1.showStat();
	for(int i = 0; i < 11; i++)
	{
		ft1.attack("target");
	}
	ft1.showStat();
	std::cout << std::endl;

	std::cout << "beRepaired()" << std::endl;
	ft1.beRepaired(10);
	ft1.showStat();
	std::cout << std::endl;

	std::cout << "takeDamage()" << std::endl;
	ft2.takeDamage(60);
	ft2.showStat();
	ft2.takeDamage(60);
	ft2.showStat();
	std::cout << std::endl;

	std::cout << "highFivesGuys()" << std::endl;
	ft3.highFivesGuys();
	std::cout << std::endl;



	return 0;
}