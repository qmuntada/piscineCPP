
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <ctime>

void	frag(void)
{
	std::string		str;
	std::string		buff;

	std::cout << "Nom de votre <FR4G-TP> ? :";
	std::getline(std::cin, str);
	FragTrap instance = FragTrap(str);

	std::cout << "LANCEMENT DU JEU !" << std::endl << std::endl;
	while (buff.compare("QUIT") != 0)
	{
		std::cout << "COMMANDE DISPO : MELEE - DISTANCE - HEAL - DEGAT - SURPRISE - QUIT" << std::endl;
		std::cout << "Please enter a command: ";
		std::cin >> buff;
		if (buff.compare("MELEE") == 0)
		{
			std::cout << "Please enter a target: ";
			std::cin >> buff;
			instance.meleeAttack(buff);
		}
		else if (buff.compare("DISTANCE") == 0)
		{
			std::cout << "Please enter a target: ";
			std::cin >> buff;
			instance.rangedAttack(buff);
		}
		else if (buff.compare("HEAL") == 0)
		{
			instance.beRepaired(rand() % 30);
		}
		else if (buff.compare("DEGAT") == 0)
		{
			instance.takeDamage(rand() % 30);
		}
		else if (buff.compare("SURPRISE") == 0)
		{
			std::cout << "Please enter a target: ";
			std::cin >> buff;
			instance.vaulthunter_dot_exe(buff);
		}
	}
	return ;
}

void	scav(void)
{
	std::string		str;
	std::string		buff;

	std::cout << "Nom de votre <SC4V-TP> ? :";
	std::getline(std::cin, str);
	ScavTrap instance = ScavTrap(str);

	std::cout << "LANCEMENT DU JEU !" << std::endl << std::endl;
	while (buff.compare("QUIT") != 0)
	{
		std::cout << "COMMANDE DISPO : MELEE - DISTANCE - HEAL - DEGAT - CHALLENGE - QUIT" << std::endl;
		std::cout << "Please enter a command: ";
		std::cin >> buff;
		if (buff.compare("MELEE") == 0)
		{
			std::cout << "Please enter a target: ";
			std::cin >> buff;
			instance.meleeAttack(buff);
		}
		else if (buff.compare("DISTANCE") == 0)
		{
			std::cout << "Please enter a target: ";
			std::cin >> buff;
			instance.rangedAttack(buff);
		}
		else if (buff.compare("HEAL") == 0)
		{
			instance.beRepaired(rand() % 30);
		}
		else if (buff.compare("DEGAT") == 0)
		{
			instance.takeDamage(rand() % 30);
		}
		else if (buff.compare("CHALLENGE") == 0)
		{
			instance.challengeNewcomer();
		}
	}
	return ;
}

int		main(void)
{
	std::string		str;

	srand(time(NULL));
	std::cout << "FRAG(0) OU SCAV(1) ? :";
	std::getline(std::cin, str);
	if (str.compare("0") == 0)
		frag();
	else
		scav();
	return (0);
}
