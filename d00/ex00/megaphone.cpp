
#include <iostream>

int		main(int ac, char **av)
{
	int		i;
	int		cpt;

	if (ac > 1)
	{
		i = 0;
		while (av[++i])
		{
			cpt = -1;
			while (av[i][++cpt])
			{
				std::cout << (char)toupper(av[i][cpt]);
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
