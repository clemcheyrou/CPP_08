/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:04:50 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/07 17:33:38 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "\n--------VECTOR--------\n" ;
	{
		std::vector<int> vector;
		std::vector<int>::iterator	index;
		
		for (int i = 0; i < 10; i++)
			vector.push_back(rand() % 10);
		for (unsigned i = 0; i < vector.size(); i++)
			std::cout << vector.at(i) << " ";
		std::cout<< std::endl;
		try 
		{
			index = easyfind(vector, 9);
			std::cout << std::distance(vector.begin(), index) << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout<< e.what() << "\n";
		}
	}
	
	std::cout << "\n--------LIST--------\n";
	
	{
		//List : pour parcourir une liste il faut utiliser des iterateurs
		std::list<int>				list;
		std::list<int>::iterator	index;

		list.push_back(10);
		list.push_back(0);
		list.push_back(-5);
		for(index = list.begin(); index != list.end(); index++)
			std::cout << *index << " ";
		std::cout << std::endl;
		try
		{
			index = easyfind(list, 0);
			std::cout << *index << " exist but list don't give index" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << "\n";
		}

		try
		{
			index = easyfind(list, -5);
			std::cout << *index << " exist but list don't give index" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << "\n";
		}

		try
		{
			index = easyfind(list, 4);
			std::cout << *index << " exist but list don't give index" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	
	// std::cout << "\n--------ARRAY--------\n" ;
	// {
	// 	std::array<int, 5> n = {1, 2, 3, 4, 5};
	// 	std::array<int,5>::iterator	index;
	// 	try 
	// 	{
	// 		index = easyfind(n, 9);
	// 		std::cout << *index << std::endl;
	// 	}
	// 	catch(std::exception &e)
	// 	{
	// 		std::cout<< e.what() << "\n";
	// 	}
	// }
	
	return (0);
}