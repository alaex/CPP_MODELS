/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:39:44 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/15 21:43:41 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>



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