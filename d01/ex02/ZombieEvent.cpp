/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <qmuntada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 18:28:04 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/16 19:29:33 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie();

	zombie->Zombie::setName(name);
	zombie->Zombie::setType(this->type);
	return (zombie);
}

Zombie*		ZombieEvent::randomChump(void)
{
	Zombie *zombie = new Zombie();
	std::string pool[5] = {"Jean-Jacques", "Gertrude", "Robert", "Baudouin", "Therese"};

	zombie->Zombie::setName(pool[std::rand() % 5]);
	zombie->Zombie::setType(this->type);
	zombie->Zombie::announce();
	return (zombie);
}
