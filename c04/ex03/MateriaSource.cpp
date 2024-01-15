/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:47:11 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 16:28:14 by aen-naas         ###   ########.fr       */
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


MateriaSource::MateriaSource(const MateriaSource& other)
{
	// std::cout << "MateriaSource  copy constructor" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j && this->material[j] == this->material[i])
				this->material[i] = NULL;
		}
		delete this->material[i];
		this->material[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->material[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (this->material[i] != NULL)
				this->material[i] = other.material[i]->clone();
			else
				this->material[i] = NULL;
		}
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
		if (this->material[i] && this->material[i]->getType() == type)
			return this->material[i]->clone();
	}
	return NULL;
}
