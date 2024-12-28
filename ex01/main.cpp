#include "ScavTrap.hpp"

int main()
{
	std::cout << "생성자()" << std::endl;
	ScavTrap st1;
	std::cout << std::endl;

	std::cout << "생성자(string)" << std::endl;
	ScavTrap st2("hi");
	std::cout << std::endl;

	std::cout << "복사 생성자" << std::endl;
	ScavTrap st3(st1);
	std::cout << std::endl;

	std::cout << "복사 대입 연산자" << std::endl;
	ScavTrap st4 = st2;
	std::cout << std::endl;

	std::cout << "attack(target)" << std::endl;
	st1.attack("target");
	st1.showStat();
	for(int i = 0; i < 11; i++)
	{
		st1.attack("target");
	}
	st1.showStat();
	std::cout << std::endl;

	std::cout << "beRepaired()" << std::endl;
	st1.beRepaired(10);
	st1.showStat();
	std::cout << std::endl;

	std::cout << "takeDamage()" << std::endl;
	st2.takeDamage(60);
	st2.showStat();
	st2.takeDamage(60);
	st2.showStat();
	std::cout << std::endl;

	std::cout << "guardGate()" << std::endl;
	st3.guardGate();
	std::cout << std::endl;



	return 0;
}