
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <cstdlib>

class ScavTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const & ScavTrap);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	challengeNewcomer(std::string const & target);

	unsigned int	getHitPoints(void) const;
	unsigned int	getMaxHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getMaxEnergyPoints(void) const;
	unsigned int	getLevel(void) const;
	std::string		getName(void) const;
	unsigned int	getMaleeAttackDamage(void) const;
	unsigned int	getRangedAttackDamage(void) const;
	unsigned int	getArmorDamageReduction(void) const;

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
