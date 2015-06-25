
#include "Array.hpp"

int		main(void)
{
	Array<int> array1(5);
	Array<std::string> array2(2);

	array1[0] = 42;
	array1[1] = 43;
	array1[2] = 12;
	array1[3] = 53;
	array1[4] = 75;

	for (int i = 0; i < 5; i++)
		std::cout << "[" << (int)array1[i] << "] ";
	std::cout << std::endl;

	array2[0] = "string1";
	array2[1] = "string2";
	for (int i = 0; i < 2; i++)
		std::cout << "[" << (std::string)array2[i] << "] ";
	std::cout << std::endl << std::endl;

	std::cout << "Si on essaye d'acceder a une valeur non assigne : ";

	try
	{
		std::cout << "[" << (std::string)array2[3] << "] " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "value not in range :" << e.what();
	}
	return (0);
}
