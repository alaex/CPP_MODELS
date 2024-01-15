/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:37:04 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/10 17:59:00 by aen-naas         ###   ########.fr       */
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

#endif