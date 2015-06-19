/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 11:27:09 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/19 13:37:45 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer(void);
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);

	Sorcerer &		operator=(Sorcerer const & sorcerer);

	void			polymorph(Victim const & victim);

	std::string		getName(void) const;
	std::string		getTitle(void) const;

private:
	std::string		_name;
	std::string		_title;
};

std::ostream &		operator<<(std::ostream & o, Sorcerer const & i);

# endif
