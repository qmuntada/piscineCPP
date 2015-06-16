
#include "Pony.hpp"

				Pony::Pony(std::string color) : _color(color)
{
	std::cout << "The " << this->_color << " pony was created" << std::endl;
	return ;
}

				Pony::~Pony(void)
{
	std::cout << "The " << this->_color << " pony was destroyed" << std::endl;
	return ;
}

std::string		Pony::getPonyColor(void)
{
	return this->_color;
}
