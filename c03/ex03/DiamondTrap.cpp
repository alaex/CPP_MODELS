/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:20:29 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/08 16:16:15 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :name("default")
{
    ClapTrap::name = name + "_clap_name";
    this->name = "default";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "Default DiamondTrap Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    std::cout << "DiamondTrap Copy Construct" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        // ClapTrap(*this);
    }
    return *this;
}

DiamondTrap::DiamondTrap(std::string name): name(name)
{
    ClapTrap::name = name + "_clap_name";
    std::cout << "Diamond Trap parameter constructor" << std::endl;
    this->hit_points = 100;
    this->attack_damage = 50;
    this->energy_points = 20;
};

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor" << std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
    this->ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}