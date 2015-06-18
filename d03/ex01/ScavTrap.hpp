
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <cstdlib>

class ScavTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	challengeNewcomer(std::string const & target);

private:
	std::string			_name;
	unsigned int		_hitPoints;
	unsigned int const	_maxHitPoints;
	unsigned int		_energyPoints;
	unsigned int const	_maxEnergyPoints;
	unsigned int		_level;
	unsigned int const	_meleeAttackDamage;
	unsigned int const	_rangedAttackDamage;
	unsigned int const	_armorDamageReduction;
};

# endif
