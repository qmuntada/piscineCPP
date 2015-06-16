/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <qmuntada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:54:08 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/16 19:24:37 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << '(' << this->_type << ')' << "> Argghhhhhhh" << std::endl;
	return ;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << '(' << this->_type << ')' << "> Braiiiiiiiiiinnnsss" << std::endl;
}
