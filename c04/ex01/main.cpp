/*  ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:37:52 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/10 15:44:39 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	int size = 10;
	Animal* base[size];
	for (int i = 0; i < size / 2; i++)
	{
		base[i] = new Dog();
	}
	for (int i = size / 2; i < size; i++)
	{
		base[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
	{
		base[i]->makeSound();
		delete base[i];
	}
}