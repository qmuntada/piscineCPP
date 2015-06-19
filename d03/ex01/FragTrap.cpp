
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << this->_name << "<FR4G-TP> pare a l'action" << std::endl;
	return ;
}

FragTrap::FragTrap(void) : _name("null"), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << this->_name << "<FR4G-TP> pare a l'action" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Le <FR4G-TP> " << this->_name << " retire du jeu :("
		<< std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & fragTrap)
{
	this->_hitPoints = fragTrap.getHitPoints();
	this->_energyPoints = fragTrap.getEnergyPoints();
	this->_level = fragTrap.getLevel();
	this->_name = fragTrap.getName();
	return (*this);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << "<FR4G-TP> attacks " << target <<
			" at range, causing "<< this->_rangedAttackDamage <<
			" damage points !" << std::endl;
	}
	else
		std::cout << this->_name <<
			"<FR4G-TP> i can't attack ! I'm dead !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << "<FR4G-TP> attacks " << target <<
			" in melee, causing "<< this->_meleeAttackDamage <<
			" damage points !" << std::endl;
	}
	else
		std::cout << this->_name <<
			"<FR4G-TP> i can't attack ! I'm dead !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	unsigned realDamage;

	realDamage = (amount > this->_armorDamageReduction ?
		amount - this->_armorDamageReduction : 0);
	std::cout << this->_name << "<FR4G-TP>" << "Ouch ! I've suffered "
		<< realDamage << " damage points !" << std::endl;
	if (realDamage >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= realDamage;
	std::cout << this->_name << "<FR4G-TP> My hp is now : " <<
		this->_hitPoints << " ! ";
	std::cout << (this->_hitPoints > 0 ? "Thanks god i'm still alive !" :
		"ok i'm dead") << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << this->_name << "<FR4G-TP> I have gained "<< amount <<
		" HP !" << "My hp is now : " << this->_hitPoints << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int		i = rand()  % 5;

	if (this->_energyPoints < 25)
	{
		std::cout << this->_name <<
			"<FR4G-TP> I don't have enough energy points :(" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name <<
			"<FR4G-TP> i can't attack ! I'm dead !" << std::endl;
		return ;
	}
	this->_energyPoints -= 25;
	std::cout << this->_name << "<FR4G-TP> PREPARE YOURSELF FOR THE ULTIMATE ATTACK" <<
		std::endl;
	if (i == 0)
	{
		std::cout << this->_name << "<FR4G-TP> ARMAGEDDON !!!!" << std::endl;
		std::cout << this->_name << "<FR4G-TP> attacks " << target <<
			" causing "<< 9999999 << " damage points !" << std::endl;
	}
	else if (i == 1)
	{
		std::cout << this->_name << "<FR4G-TP> oh shit i missed" << std::endl;
		std::cout << this->_name << "<FR4G-TP> miss " << target <<
			" causing "<< 0 << " damage points !" << std::endl;
	}
	else if (i == 2)
	{
		std::cout << this->_name << "<FR4G-TP> HEALING !!!" << std::endl;
		beRepaired(100);
	}
	else if (i == 3)
	{
		std::cout << this->_name << "<FR4G-TP> BOOMERANG !!!!" << std::endl;
		rangedAttack(target);
		takeDamage(this->_rangedAttackDamage);
	}
	else if (i == 4)
	{
		std::cout << this->_name << "<FR4G-TP> I NEED MORE MAMA" << std::endl;
		this->_energyPoints = 100;
		std::cout << this->_name << 
			"<FR4G-TP> I have regain all my energy points" << std::endl;
	}
}

unsigned int		FragTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}
unsigned int		FragTrap::getMaxHitPoints(void) const
{
	return (this->_maxHitPoints);
}
unsigned int		FragTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}
unsigned int		FragTrap::getMaxEnergyPoints(void) const
{
	return (this->_maxEnergyPoints);
}
unsigned int		FragTrap::getLevel(void) const
{
	return (this->_level);
}
std::string			FragTrap::getName(void) const
{
	return (this->_name);
}
unsigned int		FragTrap::getMaleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}
unsigned int		FragTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}
unsigned int		FragTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}
