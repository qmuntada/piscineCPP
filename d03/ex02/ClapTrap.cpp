
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << "Construction d'un ClapTrap en cours..." << std::endl;
	return ;
}

ClapTrap::ClapTrap(void) : _name("null"), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << "Construction d'un ClapTrap en cours..." << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destruction d'un ClapTrap en cours..." << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & fragTrap)
{
	this->_hitPoints = fragTrap.getHitPoints();
	this->_energyPoints = fragTrap.getEnergyPoints();
	this->_level = fragTrap.getLevel();
	this->_name = fragTrap.getName();
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << ": attacks " << target <<
			" at range, causing "<< this->_rangedAttackDamage <<
			" damage points !" << std::endl;
	}
	else
		std::cout << this->_name <<
			": i can't attack ! I'm dead !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << ": attacks " << target <<
			" in melee, causing "<< this->_meleeAttackDamage <<
			" damage points !" << std::endl;
	}
	else
		std::cout << this->_name <<
			": i can't attack ! I'm dead !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned realDamage;

	realDamage = (amount > this->_armorDamageReduction ?
		amount - this->_armorDamageReduction : 0);
	std::cout << this->_name << ":" << "Ouch ! I've suffered "
		<< realDamage << " damage points !" << std::endl;
	if (realDamage >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= realDamage;
	std::cout << this->_name << ": My hp is now : " <<
		this->_hitPoints << " ! ";
	std::cout << (this->_hitPoints > 0 ? "Thanks god i'm still alive !" :
		"ok i'm dead") << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << this->_name << ": I have gained "<< amount <<
		" HP !" << "My hp is now : " << this->_hitPoints << std::endl;
}

unsigned int		ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}
unsigned int		ClapTrap::getMaxHitPoints(void) const 
{
	return (this->_maxHitPoints);
}
unsigned int		ClapTrap::getEnergyPoints(void) const 
{
	return (this->_energyPoints);
}
unsigned int		ClapTrap::getMaxEnergyPoints(void) const 
{
	return (this->_maxEnergyPoints);
}
unsigned int		ClapTrap::getLevel(void) const 
{
	return (this->_level);
}
std::string			ClapTrap::getName(void) const 
{
	return (this->_name);
}
unsigned int		ClapTrap::getMaleeAttackDamage(void) const 
{
	return (this->_meleeAttackDamage);
}
unsigned int		ClapTrap::getRangedAttackDamage(void) const 
{
	return (this->_rangedAttackDamage);
}
unsigned int		ClapTrap::getArmorDamageReduction(void) const 
{
	return (this->_armorDamageReduction);
}
