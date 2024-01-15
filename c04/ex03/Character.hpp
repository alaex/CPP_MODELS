/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:08:23 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/13 15:42:48 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		AMateria *inventory[4];
		std::string name;
	public:
	// canonical form
		Character();
		Character(std::string name);
		Character& operator=(const Character& other);
		std::string const & getName() const;
    	Character(const Character& other);
    	~Character();
	// function
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif