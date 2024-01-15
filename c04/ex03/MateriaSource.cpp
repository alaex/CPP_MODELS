/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:47:11 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/14 23:11:06 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// canonical form
MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->material[i] = NULL;
	
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->material[i] && this->material[i] != this->material[i + 1])
			delete this->material[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	// std::cout << "MateriaSource  copy constructor" << std::endl;
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		// std::cout << "MateriaSource copy assignment operator" << std::endl;
		// delete this;
		*this->material = *other.material; // fix leater
	}
	return *this;
}

// functions 

void MateriaSource::learnMateria(AMateria* other)
{
	for (int i = 0; i < 4; i++)
	{
		if (material[i] == NULL)
		{
			material[i] = other->clone();
			delete other;
			return ;
		}
	}
	delete other;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->material[i]->getType() == type)
			return this->material[i]->clone();
	}
	return NULL;
}
