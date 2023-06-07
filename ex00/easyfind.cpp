/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:04:35 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/07 17:37:41 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>
# include <iostream>
# include <string>
# include <list>
# include <vector>
# include <array>

class NbNotFound : public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return ("No occurence found");
	}
};

template<typename T>
typename T::iterator	easyfind(T container, int nb)
{
	typename T::iterator iterateur_premier_mot = find(container.begin(), container.end(), nb);
	if (iterateur_premier_mot == container.end())
	{
		std::cout << nb << " : " << " ";
		throw(NbNotFound());
	}
	return (iterateur_premier_mot);
}

#endif