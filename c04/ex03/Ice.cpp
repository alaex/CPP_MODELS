/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:48:13 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 15:19:52 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
// canonical form
Ice::Ice()
{
    // std::cout << "Ice default constructor" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice& other)
{
    // std::cout << "Ice copy constructor" << std::endl;
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        // std::cout << "Ice copy assignment operator" << std::endl;
        this->type = other.type;
    }
    return *this;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor" << std::endl;
}



// functions


AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
