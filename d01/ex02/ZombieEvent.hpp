/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <qmuntada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 18:22:03 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/16 19:12:16 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
public:
	void		setZombieType(std::string type);
	Zombie*		newZombie(std::string name);
	Zombie*		randomChump(void);

private:
	std::string		type;
};

# endif
