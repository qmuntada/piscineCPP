
#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
	Brain const		_brain;

public:
	Human(void);
	~Human(void);
	Brain const		&getBrain(void) const;
	std::string		identify(void);
};

# endif
