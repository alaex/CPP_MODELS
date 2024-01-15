/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:00:21 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/11 14:59:45 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRIAN_HPP
#define BRIAN_HPP

#include "Animal.hpp"

class Brain  {
    private:
        std::string ideas[100];
	public:
	 	Brain();
        Brain(const std::string &name);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        virtual ~Brain();
};


#endif