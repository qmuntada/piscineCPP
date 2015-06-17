/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 16:31:40 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/17 16:31:41 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _weapon(weapon){

}

Weapon::~Weapon() {

}

std::string const & Weapon::getType() const {
	return this->_weapon;
}

void				Weapon::setType(std::string weapon) {
	this->_weapon = weapon;
}
