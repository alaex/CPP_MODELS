/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:40:26 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 22:36:07 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

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