
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void	easyfind(T container, int search)
{
	typename T::iterator it;

	it = find(container.begin(), container.end(), search);
	if (it != container.end())
		std::cout << "Element found : " << *it << std::endl;
	else
		throw std::exception();
}

#endif
