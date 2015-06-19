
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <cstdlib>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap &		operator=(ClapTrap const & clapTrap);

	unsigned int	getHitPoints(void) const;
	unsigned int	getMaxHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getMaxEnergyPoints(void) const;
	unsigned int	getLevel(void) const;
	std::string		getName(void) const;
	unsigned int	getMaleeAttackDamage(void) const;
	unsigned int	getRangedAttackDamage(void) const;
	unsigned int	getArmorDamageReduction(void) const;

protected:
	std::string			_name;
	unsigned int		_hitPoints;
	unsigned int		_maxHitPoints;
	unsigned int		_energyPoints;
	unsigned int 		_maxEnergyPoints;
	unsigned int		_level;
	unsigned int		_meleeAttackDamage;
	unsigned int		_rangedAttackDamage;
	unsigned int		_armorDamageReduction;
};

# endif
