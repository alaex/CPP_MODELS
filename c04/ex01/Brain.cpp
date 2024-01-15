/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:00:15 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/11 14:14:16 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        std::cout << "Brain copy assignment operator" << std::endl;
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}
