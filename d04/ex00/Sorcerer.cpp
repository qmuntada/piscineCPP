/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 11:36:59 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/19 14:43:31 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("Robert"), _title("the magnificient")
{
	std::cout << this->_name << " " << this->_title << " is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << " " << this->_title << " is born !" << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << " " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

std::string		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void			Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
	return ;
}

Sorcerer &		Sorcerer::operator=(Sorcerer const & sorcerer)
{
	this->_name = sorcerer.getName();
	this->_title = sorcerer.getTitle();
	return (*this);
}

std::ostream &		operator<<(std::ostream & o, Sorcerer const & rhs)
{
	std::cout << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return (o);
}
