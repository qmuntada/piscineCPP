/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 16:31:15 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/17 16:31:17 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB() {
	return ;
}

void			HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void		HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

