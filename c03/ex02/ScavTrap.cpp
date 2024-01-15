/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:29:38 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/08 12:49:35 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "default";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap parametre constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap Copy constructor" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->attack_damage  = other.attack_damage;
        this->energy_points = other.energy_points;
        this->hit_points = other.hit_points;
        this->name = other.name; 
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points == 0)
    {
        std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
        return;
    }
    if (energy_points)
    {
        std::cout << "ScavTrap " << this->name << " attack " << target << " causing " << this->attack_damage << " points of damage!"<< std::endl;
        energy_points--;
    }
    else
        std::cout << "Energy points is zero!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}