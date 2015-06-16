
#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{

public:

					Pony(std::string color);
					~Pony(void);

	std::string		getPonyColor(void);

private:

	std::string		_color;

};

# endif
