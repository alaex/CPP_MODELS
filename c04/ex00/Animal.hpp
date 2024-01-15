/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:02:43 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/10 15:36:14 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIME_HPP
#define ANIME_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal& operator=(const Animal& other);
        Animal(const Animal& other);
        ~Animal();
        virtual void makeSound();
};

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& other);
        WrongAnimal(const WrongAnimal& other);
        ~WrongAnimal();
        void makeSound();
};

#endif