/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:27:43 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/07 21:07:50 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    protected:
        std::string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damage;
    public:
        ClapTrap();
		ClapTrap(const std::string& name);
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif