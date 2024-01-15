/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:32:49 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/07 21:21:59 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap") , hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name) , hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "parametre constructor" << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->attack_damage  = other.attack_damage;
        this->energy_points = other.energy_points;
        this->hit_points = other.hit_points;
        this->name = other.name;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "copy constructor" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return;
    }
    if (energy_points)
    {
        std::cout << "ClapTrap " << this->name << " attack " << target << " causing " << this->attack_damage << " points of damage!"<< std::endl;
        energy_points--;
    }
    else
        std::cout << "Energy points is zero!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount < hit_points)
    {
        std::cout << "ClapTrap " << this->name << " take damage " << amount << " points of damage!"<< std::endl;
        hit_points -= amount;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        hit_points = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return;
    }
    if (energy_points)
    {
        std::cout << "ClapTrap " << this->name << " got repaired by the amount of " << amount << std::endl;
        hit_points+=amount;
        energy_points--;
    }
    else
        std::cout << "Energy points is zero!" << std::endl;
}
