/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:38:25 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 21:38:38 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

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