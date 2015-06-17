/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 16:31:23 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/17 16:31:24 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void		attack();
	void		setWeapon(Weapon& weapon);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
