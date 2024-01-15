/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:42:30 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/08 10:27:46 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    this->name = "default";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap parametre constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "FragTrap Copy constructor" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->attack_damage  = other.attack_damage;
        this->energy_points = other.energy_points;
        this->hit_points = other.hit_points;
        this->name = other.name; 
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap highFivesGuys" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}