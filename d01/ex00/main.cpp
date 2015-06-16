
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*brownPony = new Pony("brown");

	std::cout << "woah this pony is so " << 
		brownPony->getPonyColor() << std::endl;

	delete brownPony;

	std::cout << "end of the brown pony function" << std::endl;
	return ;
}

void	ponyOnTheStack(void)
{
	Pony	whitePony = Pony("white");

	std::cout << "woah this pony is so " << 
		whitePony.getPonyColor() << std::endl;

	std::cout << "end of the white pony function" << std::endl;
	return ;
}

int		main(void)
{
	std::cout << "Start of the function, nothing instantiated yet"
		<< std::endl;

	ponyOnTheStack();

	ponyOnTheHeap();

	std::cout << "end of the program" << std::endl;

	return (0);
}
