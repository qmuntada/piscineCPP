
#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);

	FragTrap &		operator=(FragTrap const & fragtrap);

	void	vaulthunter_dot_exe(std::string const & target);
};

# endif
