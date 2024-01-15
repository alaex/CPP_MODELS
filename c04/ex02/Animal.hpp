/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:52:40 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 18:38:58 by aen-naas         ###   ########.fr       */
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
        virtual ~Animal();
        virtual void makeSound() = 0;
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