/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:21:32 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/19 13:45:41 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("Jimmy")
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

std::string		Victim::getName(void) const
{
	return (this->_name);
}

Victim &		Victim::operator=(Victim const & victim)
{
	this->_name = victim.getName();
	return (*this);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &		operator<<(std::ostream & o, Victim const & rhs)
{
	std::cout << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return (o);
}
