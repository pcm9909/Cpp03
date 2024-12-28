#include "ClapTrap.hpp"

int main()
{
	std::cout << "생성자()" << std::endl;
	ClapTrap ct1;
	std::cout << std::endl;

	std::cout << "생성자(string)" << std::endl;
	ClapTrap ct2("hi");
	std::cout << std::endl;

	std::cout << "복사 생성자" << std::endl;
	ClapTrap ct3(ct1);
	std::cout << std::endl;

	std::cout << "복사 대입 연산자" << std::endl;
	ClapTrap ct4 = ct2;
	std::cout << std::endl;

	std::cout << "attack(target)" << std::endl;
	ct1.attack("target");
	ct1.showStat();
	for(int i = 0; i < 11; i++)
	{
		ct1.attack("target");
	}
	ct1.showStat();
	std::cout << std::endl;

	std::cout << "beRepaired()" << std::endl;
	ct1.beRepaired(10);
	ct1.showStat();
	std::cout << std::endl;

	std::cout << "takeDamage()" << std::endl;
	ct2.takeDamage(30);
	ct2.showStat();
	ct2.takeDamage(10);
	std::cout << std::endl;



	return 0;
}