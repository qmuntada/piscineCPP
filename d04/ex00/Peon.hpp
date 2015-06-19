/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:40:18 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/19 14:41:58 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(void);
	Peon(std::string name);
	~Peon(void);

	virtual void	getPolymorphed(void) const;

	Peon &	operator=(Peon const & peon);
};

# endif
