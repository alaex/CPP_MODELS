/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:39:27 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/08 10:28:05 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default") , hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name) , hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap parametre constructor" << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
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
    std::cout << "ClapTrap copy constructor" << std::endl;
    *this = other;
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}
