/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:28:49 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/14 23:10:25 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void	f()
{
	system("leaks game");
}

int main()
{
	atexit(f);
	IMateriaSource* src = new MateriaSource();
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();

	*ice = *cure;
	src->learnMateria(ice);
	src->learnMateria(cure);
	ICharacter* me = new Character("me");
	AMateria* tmp;
	// MateriaSource* source = new MateriaSource;
	// MateriaSource* source1 = new MateriaSource;
	// source1 = source;
	// delete source;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}