/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 17:57:22 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/17 18:40:26 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _value(0), _frac(8)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n) : _value(n), _frac(8)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_frac;
	return ;
}

Fixed::Fixed(Fixed const & src) : _frac(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(float const n) : _value(0), _frac(8)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * pow(2, (this->_frac)));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

Fixed		Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(this->_value + rhs.getRawBits());
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value * pow(2, -(this->_frac)));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_frac);
}
