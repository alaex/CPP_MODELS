/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:14:15 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/13 15:44:23 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
class Cure: public AMateria {
	public:
	// canonical form
		Cure();
		Cure& operator=(const Cure& other);
    	Cure(const Cure& other);
    	virtual ~Cure();
	// funcions
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif