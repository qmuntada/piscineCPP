
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << "<SC4V-TP> attacks " << target <<
			" at range, causing "<< this->_rangedAttackDamage <<
			" damage points !" << std::endl;
	}
	else
		std::cout << this->_name <<
			"<SC4V-TP> i can't attack ! I'm dead !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << "<SC4V-TP> attacks " << target <<
			" in melee, causing "<< this->_meleeAttackDamage <<
			" damage points !" << std::endl;
	}
	else
		std::cout << this->_name <<
			"<SC4V-TP> i can't attack ! I'm dead !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned realDamage;

	realDamage = (amount > this->_armorDamageReduction ?
		amount - this->_armorDamageReduction : 0);
	std::cout << this->_name << "<SC4V-TP>" << "Ouch ! I've suffered "
		<< realDamage << " damage points !" << std::endl;
	if (realDamage >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= realDamage;
	std::cout << this->_name << "<SC4V-TP> My hp is now : " <<
		this->_hitPoints << " ! ";
	std::cout << (this->_hitPoints > 0 ? "Thanks god i'm still alive !" :
		"ok i'm dead") << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << this->_name << "<SC4V-TP> I have gained "<< amount <<
		" HP !" << "My hp is now : " << this->_hitPoints << std::endl;
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
