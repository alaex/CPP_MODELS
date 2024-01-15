/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:36:50 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/10 17:59:38 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const std::string& name)
{
    std::cout << "Cat parameter constructor" << std::endl;
    this->type = name;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        std::cout << "Cat copy assignment operator" << std::endl;
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound()
{
    std::cout << "Cat make sound bark" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}
