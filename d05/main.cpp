#include "Bureaucrat.hpp"

int 	main(void)
{
	Bureaucrat toto = Bureaucrat("toto", 200);
	
	std::cout << toto << std::endl;
	while (toto.getGrade() > -100)
	{
		toto.setGrade(toto.getGrade - 30);
		std::cout << toto << std::endl;
	}
	return 0;
}