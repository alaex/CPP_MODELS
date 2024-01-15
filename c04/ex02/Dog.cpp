/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:32:05 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 18:39:58 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor" << std::endl;
    this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const std::string& name)
{
    std::cout << "Dog parameter constructor" << std::endl;
    this->type = name;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        std::cout << "Dog copy assignment operator" << std::endl;
        this->type = other.type;
		this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound()
{
    std::cout << "Dog make sound bark" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}
// Wrong Dog class

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

