/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <qmuntada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 18:47:23 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/16 21:52:10 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	int				n;
	std::string		str;

	std::cout << "How many zombies do you want to summon :";
	std::getline(std::cin, str);

	try
	{
		n = std::stoi(str);
	}
	catch(...)
	{
		std::cout << "try entering a number next time you cunt" << std::endl;
		return (0);
	}
	if (n < 0 || n > 1000)
	{
		std::cout << "try entering a real number next time you cunt" << std::endl;
		return (0);
	}
	std::cout << "UNLEASH THE HORDE !!!!!!!!!!" << std::endl;
	ZombieHorde horde(n);
	horde.announce();

	std::cout << "KILL THEM ALL !!!!" << std::endl;
	return (0);
}
