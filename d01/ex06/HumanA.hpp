/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 16:31:07 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/17 16:31:09 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void		attack();

private:
	std::string _name;
	Weapon &_weapon;
};

#endif
