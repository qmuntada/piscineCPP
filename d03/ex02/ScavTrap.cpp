
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << "<SC4V-TP> pret !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(void) : ClapTrap("null")
{
	std::cout << this->_name << "<SC4V-TP> pret !" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Le <SC4V-TP> " << this->_name << " s'en va :("
		<< std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & fragTrap)
{
	this->_hitPoints = fragTrap.getHitPoints();
	this->_energyPoints = fragTrap.getEnergyPoints();
	this->_level = fragTrap.getLevel();
	this->_name = fragTrap.getName();
	return (*this);
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	int		i = rand() % 3;

	std::cout << this->_name << "<SC4V-TP> Bon j'avoue flemme de trouver"
		<< " des truc originaux la" << std::endl;
	if (i == 0)
	{
		std::cout << this->_name << "<SC4V-TP> challenge 1 sur " <<
		target << std::endl;
	}
	else if (i == 1)
	{
		std::cout << this->_name << "<SC4V-TP> challenge 2 sur " <<
		target << std::endl;
	}
	else if (i == 2)
	{
		std::cout << this->_name << "<SC4V-TP> challenge 3 sur " <<
		target << std::endl;
	}
	std::cout << this->_name << "<SC4V-TP> ouahou c'etait fun" << std::endl;
}
