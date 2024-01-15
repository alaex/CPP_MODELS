/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:36:50 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 19:52:27 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor" << std::endl;
    this->type = "Cat";
	this->brain = new Brain();
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
		this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound()
{
    std::cout << "Cats don't bark" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

// Wrong Cat class


WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const std::string& name)
{
    std::cout << "WrongCat parameter constructor" << std::endl;
    this->type = name;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat copy constructor" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
        std::cout << "WrongCat copy assignment operator" << std::endl;
        this->type = other.type;
    }
    return *this;
}

void WrongCat::makeSound()
{
    std::cout << "WrongCat don't barkbark" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}