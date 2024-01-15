/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:37:52 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 19:58:37 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    // Cat cat;
	// WrongAnimal* i = new WrongCat();
	// WrongAnimal* j = new WrongDog();
	Animal* j = new Cat();
	Animal* i = new Dog();
	std::cout << "-------------------" << std::endl;
	i->makeSound();
	j->makeSound();
	delete i;
	delete j;
	// Animal animel;
}