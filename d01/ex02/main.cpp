/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <qmuntada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 18:47:23 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/16 19:48:25 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	zombieHeap(void)
{
	Zombie *zombie[10];
	ZombieEvent instance;

	std::cout << "Les zombie random instancie" << std::endl;
	instance.ZombieEvent::setZombieType("le zombie pas content");
	for(int i = 0; i < 10; i++)
		zombie[i] = instance.ZombieEvent::randomChump();
	std::cout << "TUEZ LES ZOMBIES !!!" << std::endl;
	for(int i = 0; i < 10; i++)
		delete zombie[i];
	return ;
}

void	zombieStack(void)
{
	Zombie		*zombie;
	ZombieEvent	instance;
	std::string	str;

	std::cout << "Creer votre propre zombie !" << std::endl;
	std::cout << "Choisissez le type de zombie :";
	std::getline(std::cin, str);
	instance.ZombieEvent::setZombieType(str);
	std::cout << "Choisissez le nom de votre zombie :";
	std::getline(std::cin, str);
	zombie = instance.newZombie(str);
	zombie->announce();
	std::cout << "A MORT !!" << std::endl;
	delete zombie;
	return ;
}

int		main(void)
{
	zombieHeap();
	zombieStack();
	return (0);
}
