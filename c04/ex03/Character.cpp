/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:23:59 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/14 23:10:17 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// canonical form

Character::Character(std::string name) : name(name)
{
	// std::cout << "Character parameter constructor" << std::endl;
}
Character::Character()
{
    // std::cout << "Character default constructor" << std::endl;
	// inventory = new AMateria[4];
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& other)
{
    // std::cout << "Character copy constructor" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    if(this != &other)
    {
        // std::cout << "Character copy assignment operator" << std::endl;
        // this->inventory = other.inventory; // leakes
    }
    return *this;
}

std::string const& Character::getName() const 
{
	return this->name;
}


Character::~Character()
{
	// std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] && this->inventory[i] != this->inventory[i + 1])
			delete this->inventory[i];
	}
}

// functions



void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx > 4 || idx < 0)
	{
		std::cerr << "INDEX OUT OF RANGE" << std::endl;
		// return ;
	}
	// delete[] inventory;
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}

