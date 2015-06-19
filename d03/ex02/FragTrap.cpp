
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_name << "<FR4G-TP> pare a l'action" << std::endl;
	return ;
}

FragTrap::FragTrap(void) : ClapTrap("null")
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
