/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:08:55 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/11 15:11:01 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
	private:
		std::string name;
		Weapon		*weapon;
	public:
		void	attack();
		void	setWeapon(Weapon& weapon);
		HumanB(std::string name);
		~HumanB();
};

#endif