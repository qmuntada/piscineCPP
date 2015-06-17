/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 16:31:47 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/17 16:31:48 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon {
public:
	Weapon(std::string weapon);
	~Weapon();

	std::string const &	getType() const ;
	void				setType(std::string weapon);
private:
	std::string		_weapon;
};

#endif
