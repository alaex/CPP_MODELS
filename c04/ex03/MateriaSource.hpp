/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:39:59 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/13 19:18:28 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *material[4];
	public:
	// canonical form
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		virtual ~MateriaSource();
	// functions
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};


#endif