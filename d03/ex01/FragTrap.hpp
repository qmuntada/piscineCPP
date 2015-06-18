
#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <cstdlib>

class FragTrap
{
public:
	FragTrap(std::string name);
	~FragTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	vaulthunter_dot_exe(std::string const & target);

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
