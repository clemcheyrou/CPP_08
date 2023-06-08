/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:42:06 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/08 14:36:51 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try 
	{
		Span sp = Span(5);
		sp.addNumber(0);
		sp.addNumber(3);
		sp.addNumber(5);
		sp.addNumber(9);
		sp.addNumber(10);
		//sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
}