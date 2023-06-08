/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:42:20 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/08 14:43:32 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <list>
#include <limits.h>

class Span
{
	private:
		unsigned int 		_n;
		std::list<int>	_span;
		
	public:
		Span(unsigned int N);
		Span(Span const &copy);
		~Span();

		Span &operator=(Span const &rhs);
		
		void addNumber(int nb);
		void addRange(std::list<int>::iterator begin, std::list<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		
	class MaxNumberLimit : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Too many numbers\n");
		}
	};

	class NotEnoughNumber : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("Not enough numbers\n");
		}
	};
};

#endif