/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:59:29 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/29 14:16:47 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <string>
#include <deque>
#include <stack>
#include <list>

template<typename T, typename C>
class MutantStack : public std::stack<T, C> {
	public:
    // Canonical form
    	MutantStack();
    	MutantStack(const MutantStack &);
		MutantStack& operator=(const MutantStack &);
		virtual ~MutantStack();
	// type definitions
    	typedef typename C::iterator iterator;
    	typedef typename C::const_iterator const_iterator;

    // Iterator access functions
    	iterator begin() { return this->c.begin(); }
    	iterator end() { return this->c.end(); }
    	const_iterator const begin() const { return this->c.begin(); }
    	const_iterator const end() const { return this->c.end(); }
};
template<typename T, typename C>
MutantStack<T, C>::MutantStack(): std::stack<T, C>(){}

template<typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack &other)
{
	*this = other;
}

template<typename T, typename C>
MutantStack<T, C>& MutantStack<T, C>::operator=(const MutantStack &)
{
	return *this;
}

template<typename T, typename C>
MutantStack<T, C>::~MutantStack(){}
#endif