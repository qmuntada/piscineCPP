/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <qmuntada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 19:55:37 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/16 21:55:18 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : nZombie(n)
{
	this->zombie = new Zombie[n];
	std::string pool[5] = {"Jean-Jacques", "Gertrude", "Robert", "Baudouin", "Therese"};

	for(int i = 0; i < n; i++)
	{
		this->zombie[i].Zombie::setType("hordeux");
		this->zombie[i].Zombie::setName(pool[std::rand() % 5]);
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->zombie;
}

void	ZombieHorde::announce(void)
{
	for(int i = 0; i < this->nZombie; i++)
		this->zombie[i].Zombie::announce();
	return ;
}
