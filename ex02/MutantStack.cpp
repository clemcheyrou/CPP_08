/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:52:10 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/08 16:24:46 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<class T>
MutantStack<T>::MutantStack()
{}

template<class T>
MutantStack<T>::~MutantStack()
{}

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{
	*this = copy;
	return;
}
		
template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return (*this);
}