/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:19:21 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/19 14:42:06 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
public:
	Victim(void);
	Victim(std::string name);
	~Victim(void);

	Victim &	operator=(Victim const & victim);

	virtual void		getPolymorphed(void) const;

	std::string		getName(void) const;

protected:
	std::string		_name;
};

std::ostream &		operator<<(std::ostream & o, Victim const & i);

# endif
