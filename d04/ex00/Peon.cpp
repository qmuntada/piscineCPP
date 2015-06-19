/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:21:32 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/19 14:41:15 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim("Joe")
{
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon &		Peon::operator=(Peon const & peon)
{
	this->_name = peon.getName();
	return (*this);
}

void			Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
