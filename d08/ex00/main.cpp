/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 19:45:05 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/25 19:45:07 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <cstdlib>
#include <ctime>

template <typename T>
void	printContainer(T &cont)
{
	for (typename T::const_iterator it = cont.begin(); it != cont.end(); ++it)
		std::cout << *it << std::endl;
	return ;
}

template <typename T>
void	isRandomValuehere(T &cont, int value)
{
	try
	{
		easyfind(cont, value);
		std::cout << "found the value : " << value;
	}
	catch (std::exception &e)
	{
		std::cout << "could not find the value : " << value << e.what();
	}
	std::cout << std::endl;
	return ;
}

int		main(void)
{
	int					i;
	std::vector<int>	v;
	std::list<int>		l;
	std::deque<int>		d;

	srand(time(NULL));

	std::cout << "VECTOR" << std::endl;
	i = -1;
	while (++i < 10)
		v.push_back(rand() % 10);
	printContainer(v);
	isRandomValuehere(v, 7);

	std::cout << "LIST" << std::endl;
	i = -1;
	while (++i < 10)
		l.push_back(rand() % 10);
	printContainer(l);
	isRandomValuehere(l, 7);

	std::cout << "DEQUE" << std::endl;
	i = -1;
	while (++i < 10)
		d.push_back(rand() % 10);
	printContainer(d);
	isRandomValuehere(d, 7);
	return (0);
}
