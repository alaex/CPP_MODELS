/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:03:46 by aen-naas          #+#    #+#             */
/*   Updated: 2023/12/11 15:11:07 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
	private:
		std::string	name;
		Weapon&		ply_weapon;
	public:
		void	attack();
		HumanA(std::string human_name ,Weapon& weapon_type);
		~HumanA();
};

#endif