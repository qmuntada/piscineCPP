
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
	_level(1), _meleeAttackDamage(20), _rangedAttackDamage(15),
	_armorDamageReduction(3)
{
	std::cout << this->_name << "<SC4V-TP> pret !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(void) : _name("null"), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
	_level(1), _meleeAttackDamage(20), _rangedAttackDamage(15),
	_armorDamageReduction(3)
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

void	ScavTrap::challengeNewcomer()
{
	int		i = rand() % 10;

	std::cout << this->_name << "<SC4V-TP> Bon j'avoue flemme de trouver"
		<< " des truc originaux la" << std::endl;
	std::cout << this->_name << "<SC4V-TP> challenge " << i << std::endl;
	std::cout << this->_name << "<SC4V-TP> ouahou c'etait fun" << std::endl;
}

unsigned int		ScavTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}
unsigned int		ScavTrap::getMaxHitPoints(void) const
{
	return (this->_maxHitPoints);
}
unsigned int		ScavTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}
unsigned int		ScavTrap::getMaxEnergyPoints(void) const
{
	return (this->_maxEnergyPoints);
}
unsigned int		ScavTrap::getLevel(void) const
{
	return (this->_level);
}
std::string			ScavTrap::getName(void) const
{
	return (this->_name);
}
unsigned int		ScavTrap::getMaleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}
unsigned int		ScavTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}
unsigned int		ScavTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}
