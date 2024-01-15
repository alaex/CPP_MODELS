/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:11:40 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 18:34:58 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
		Brain *brain;
    public:
        Dog();
        Dog(const std::string &name);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        void makeSound();
        ~Dog();
};

class WrongDog : public WrongAnimal {
    public:
        WrongDog();
        WrongDog(const std::string &name);
        WrongDog(const WrongDog& other);
        WrongDog& operator=(const WrongDog& other);
        void makeSound();
        ~WrongDog();
};

#endif