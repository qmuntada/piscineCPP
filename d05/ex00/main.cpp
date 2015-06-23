#include "Bureaucrat.hpp"

int 	main(void)
{
	Bureaucrat toto = Bureaucrat("toto", 200);
	
	std::cout << toto << std::endl;
	while (toto.getGrade() > 1)
	{
		toto.setGrade(toto.getGrade() - 1);
		std::cout << toto << std::endl;
	}
	toto.setGrade(toto.getGrade() - 1);
	return 0;
}
