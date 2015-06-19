/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 15:12:52 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/19 16:00:31 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
private:
	std::string				_name;
	int						_damage;
	int						_AP;
	std::string				outAttack;

public:
	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon(void);

	virtual std::string		getName(void) const;
	int						getAPCost(void) const;
	int						getDamage(void) const;
	virtual void			attack(void) const = 0;
};

# endif
