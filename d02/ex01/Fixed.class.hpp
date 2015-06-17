/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 17:47:07 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/17 18:34:52 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(Fixed const & src);
	Fixed(float const n);
	~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs) const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int	_value;
	const int	_frac;
};

std::ostream &		operator<<(std::ostream & o, Fixed const & i);

# endif
