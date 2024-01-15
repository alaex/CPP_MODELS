/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:37:04 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 17:38:43 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const std::string &name);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        void makeSound();
        ~Cat();
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const std::string &name);
        WrongCat(const WrongCat& other);
        WrongCat& operator=(const WrongCat& other);
        void makeSound();
        ~WrongCat();
};



#endif