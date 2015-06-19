
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);

	ScavTrap &		operator=(ScavTrap const & scavTrap);

	void	challengeNewcomer(std::string const & target);
};

# endif
