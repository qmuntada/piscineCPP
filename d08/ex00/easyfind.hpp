/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 19:44:59 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/25 19:45:01 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
