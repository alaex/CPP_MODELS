/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:00:24 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 17:49:41 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:AForm("presidential pardon", 25,5),target("default"){}
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("presidential pardon", 25,5), target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other){
	*this = other;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
	if (this != &other)
	{
		this->target  = other.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::virtual_execute(Bureaucrat const & executor) const
{
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox\n";
}