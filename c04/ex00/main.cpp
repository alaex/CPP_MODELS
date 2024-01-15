/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:37:52 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/10 15:37:02 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    // Cat cat;
	//WrongDog dog;
	WrongAnimal* i = new WrongDog();
	Animal* j = new Dog();
	std::cout << "-------------------" << std::endl;
	i->makeSound();
	j->makeSound();
	
	// Animal animel;
}