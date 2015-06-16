/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <qmuntada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:49:36 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/16 19:12:52 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
			Zombie(void);
			~Zombie(void);

	void	announce(void);
	void	setType(std::string type);
	void	setName(std::string name);

private:
	std::string		_name;
	std::string		_type;
};

# endif
