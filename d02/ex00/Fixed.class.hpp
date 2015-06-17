/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 17:47:07 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/17 18:16:11 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs) const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	_value;
	static const int	_frac = 8;
};

std::ostream &		operator<<(std::ostream & o, Fixed const & i);

# endif
