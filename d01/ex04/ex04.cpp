
#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout << "strPtr = " << *strPtr << std::endl <<
		"strRef = " << strRef << std::endl;
	return (0);
}
