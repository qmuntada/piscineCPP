
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

void	ScavTrap::challengeNewcomer(void)
{
	int		i = rand() % 10;

	std::cout << this->_name << "<SC4V-TP> Bon j'avoue flemme de trouver"
		<< " des truc originaux la" << std::endl;
		std::cout << this->_name << "<SC4V-TP> challenge " << i << std::endl;
	std::cout << this->_name << "<SC4V-TP> ouahou c'etait fun" << std::endl;
}
