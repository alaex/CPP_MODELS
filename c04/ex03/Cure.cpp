/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:18:31 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/14 18:38:20 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// canonical form
Cure::Cure()
{
    // std::cout << "Cure default constructor" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure& other)
{
    // std::cout << "Cure copy constructor" << std::endl;
    *this = other;
}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
    {
        // std::cout << "Cure copy assignment operator" << std::endl;
        this->type = other.type;
    }
    return *this;
}


Cure::~Cure()
{
	// std::cout << "Cure destructor" << std::endl;
}

// functions

void Cure::use(ICharacter& target) 
{
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}


AMateria* Cure::clone() const
{
	return new Cure();
}

