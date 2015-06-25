
#include <iostream>

template <typename T>
void	iter(T * array, int length, T (*f)(T))
{
	for (int i = 0; i < length; i++)
		array[i] = (T)f(array[i]);
	return ;
}

template <typename T>
T		templateFunction(T val)
{
	val += (T)(2);
	return (val);
}

char	ft_toupper(char c)
{
	c = toupper(c);
	return c;
}

int		main(void)
{
	char	array1[] = "BonJoUr Ca vaAaaaaaaaaaaaaaa";
	double	array2[] = {0.41, 4.4, 6.35, 59.34, 10.01};
	int		i = -1;

	std::cout << "Avant conversion : " << array1 << std::endl;

	iter(array1, 10, &ft_toupper);

	std::cout << "Apres conversion (sur 10 caracteres) : " << array1 << std::endl;

	std::cout << "Avant conversion : ";
	while (array2[++i])
		std::cout << "[" << array2[i] << "] ";
	std::cout << std::endl;

	iter(array2, 5, &templateFunction);

	i = -1;
	std::cout << "Apres conversion : ";
	while (array2[++i])
		std::cout << "[" << array2[i] << "] ";
	std::cout << std::endl;
	return (0);
}
