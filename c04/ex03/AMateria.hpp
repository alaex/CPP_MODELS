/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:44:31 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/14 22:26:53 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string type;
	public:
		// canonical form
		AMateria(std::string const & type);
		AMateria();
		AMateria& operator=(const AMateria& other);
    	AMateria(const AMateria& other);
    	virtual ~AMateria();
		std::string const & getType() const;
		// functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif