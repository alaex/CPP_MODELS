/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:47:27 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/13 15:45:45 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
class Ice: public AMateria {
	public:
	// canonical form
		Ice();
		Ice& operator=(const Ice& other);
    	Ice(const Ice& other);
    	virtual ~Ice();
	// functions
		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif