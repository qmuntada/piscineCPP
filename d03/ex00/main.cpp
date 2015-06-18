
#include "FragTrap.hpp"
#include <ctime>

int		main(void)
{
	std::string		str;
	std::string		buff;

	srand(time(NULL));
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
	return (0);
}
