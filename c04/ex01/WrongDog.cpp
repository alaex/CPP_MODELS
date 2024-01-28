/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:40:15 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 21:45:26 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    std::cout << "WrongDog default constructor" << std::endl;
    this->type = "WrongDog";
}

WrongDog::WrongDog(const std::string& name)
{
    std::cout << "WrongDog parameter constructor" << std::endl;
    this->type = name;
}

WrongDog::WrongDog(const WrongDog& other)
{
    std::cout << "WrongDog copy constructor" << std::endl;
    *this = other;
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
    if(this != &other)
    {
        std::cout << "WrongDog copy assignment operator" << std::endl;
        this->type = other.type;
    }
    return *this;
}

void WrongDog::makeSound()
{
    std::cout << "WrongDog make sound bark" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor" << std::endl;
}
