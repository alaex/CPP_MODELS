/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:59:10 by aen-naas          #+#    #+#             */
/*   Updated: 2024/02/27 12:59:39 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.h"


int main()
{
    // deque
    std::cout << "---------------- DEQUE ----------------" << std::endl;
    MutantStack<int, std::deque<int> > mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int, std::deque<int> >::iterator it = mstack.begin();
    MutantStack<int, std::deque<int> >::const_iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // list
    std::cout << "---------------- LIST ----------------" << std::endl;
    MutantStack<int, std::list<int> > mlist;
    mlist.push(5);
    mlist.push(17);
    std::cout << mlist.top() << std::endl;
    mlist.pop();
    std::cout << mlist.size() << std::endl;
    mlist.push(3);
    mlist.push(5);
    mlist.push(737);
    mlist.push(0);
    MutantStack<int, std::list<int> >::iterator mit = mlist.begin();
    MutantStack<int, std::list<int> >::const_iterator mite = mlist.end();
    ++mit;
    --mit;
    while (mit != mite)
    {
        std::cout << *mit << std::endl;
        ++mit;
    }
    return 0;
}