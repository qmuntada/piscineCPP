
#include "Brain.hpp"

Brain::Brain(void)
{
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string		Brain::identify(void) const
{
	std::stringstream str;
	str << this;
	return (str.str());
}
