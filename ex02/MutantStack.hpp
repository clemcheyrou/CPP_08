/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:52:07 by clementinec       #+#    #+#             */
/*   Updated: 2023/06/08 16:24:26 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>
#include <iostream>
#include <iterator>

template<class T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack<T> &copy);
		~MutantStack();

		MutantStack &operator=(const MutantStack<T> &crhs);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		iterator begin()
		{ 
			return (std::stack<T>::c.begin()); 
		}
		iterator end() 
		{ 
			return (std::stack<T>::c.end()); 
		}

		const_iterator begin() const 
		{ 
			return (std::stack<T>::c.begin()); 
		}
		const_iterator end() const 
		{ 
			return (std::stack<T>::c.end()); 
		}

		reverse_iterator rbegin() 
		{ 
			return (std::stack<T>::c.rbegin()); 
		}
		reverse_iterator rend() 
		{ 
			return (std::stack<T>::c.rend()); 
		}

		const_reverse_iterator rbegin() const 
		{ 
			return (std::stack<T>::c.rbegin()); 
		}
		
		const_reverse_iterator rend() const 
		{ 
			return (std::stack<T>::c.rend()); 
		}
};
	
#endif