/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:42:20 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/07 18:17:08 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const &copy);
		~Span();

		Span &operator=(Span const &rhs);
		
		void addNumber();
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		
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