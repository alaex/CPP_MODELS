/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:32:05 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 22:37:49 by aen-naas         ###   ########.fr       */
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
	delete this->brain;
    std::cout << "Dog destructor" << std::endl;
}
