/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:46:55 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 16:33:54 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// functions

void	 AMateria::use(ICharacter& target)
{
	std::cout << "default value" << target.getName() << std::endl;
}

// canonical form

AMateria::AMateria()
{
    // std::cout << "AMateria default constructor" << std::endl;
	this->type = "default";
}

AMateria::AMateria(std::string const & type)
{
    // std::cout << "AMateria parameter constructor" << std::endl;
	this->type = type;
}


AMateria::AMateria(const AMateria& other)
{
    // std::cout << "AMateria copy constructor" << std::endl;
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	(void)other;
    // if(this != &other)
    // {
    //     // std::cout << "AMateria copy assignment operator" << std::endl;
    //     // this->type = other.type;
    // }
    return *this;
}


std::string const &AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor" << std::endl;
}
