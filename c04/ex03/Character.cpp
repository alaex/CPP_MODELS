/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:23:59 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 16:29:02 by aen-naas         ###   ########.fr       */
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
    std::cout << "Character copy constructor" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    if(this != &other)
    {
		for (int i = 0; i < 4; i++)
		{
			delete this->inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
			
		}
		this->name = other.name;
    }
    return *this;
}

std::string const& Character::getName() const 
{
	return this->name;
}


Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j && this->inventory[j] == this->inventory[i])
				this->inventory[i] = NULL;
		}
		delete this->inventory[i];
		this->inventory[i] = NULL;
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
	if (idx >= 0 && idx <= 3)
	{
		this->inventory[idx] = NULL;
		return ;
	}
	std::cerr << "INDEX OUT OF RANGE" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
		this->inventory[idx]->use(target);
	else
		std::cout << "you can't use this material at the moment" << std::endl;
}

