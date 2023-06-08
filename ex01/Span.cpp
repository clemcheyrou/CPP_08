/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:42:13 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/08 14:42:40 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _n(N)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Span::Span(Span const &copy)
{
	std::cout << "Copy called" << std::endl;
	*this = copy;
	return ;	
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
	return ;		
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
		_span.assign(rhs._span.begin(), rhs._span.end());
	}
	return (*this);
}

void Span::addNumber(int nb)
{
	if (_span.size() < _n)
        _span.push_back(nb);
    else
        throw MaxNumberLimit();
}

unsigned int Span::shortestSpan()
{
	if (_span.size() == 0 || _span.size() == 1)
		throw NotEnoughNumber();
	else
	{
		_span.sort();
		int min = INT_MAX;
		std::list<int>::iterator next = _span.begin();
		for (std::list<int>::iterator it=_span.begin(); it != _span.end(); ++it)
    	{
			next++;
			if (abs(*next - *it) < min)
				min = abs(*next - *it);
		}
		return (min);
	}
}

unsigned int Span::longestSpan()
{
	if (_span.size() == 0 || _span.size() == 1)
		throw NotEnoughNumber();
	else
	{
		_span.sort();
		return (_span.back() - _span.front());
	}
}

void Span::addRange(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	std::list<int> tmp(begin, end);
	if (tmp.size() >= (_n - _span.size()))
		throw std::out_of_range("Range is to big");
	copy(tmp.begin(), tmp.end(), std::back_inserter(_span));
}