/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 19:46:15 by qmuntada          #+#    #+#             */
/*   Updated: 2015/06/25 19:46:17 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdlib>

class Span
{
public:
	Span(void);
	Span(unsigned int const);
	Span(Span const & ref);
	~Span(void);
	Span & operator=(Span const & ref);

	void	addNumber(int const);
	int		shortestSpan(void);
	int		longestSpan(void);
	template <typename T>
	void	addRange(T cont)
	{
		for_each(cont.begin(), cont.end(), std::bind1st(std::mem_fun(&Span::addNumber), this));
	}

	unsigned int		getLen(void) const;
	std::vector<int>	getCont(void) const;

private:
	unsigned int		_len;
	std::vector<int>	_cont;
};

# endif
