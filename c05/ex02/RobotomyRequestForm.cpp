/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:14:33 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/29 18:22:13 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
	:AForm("robotomy request", 72,45),target("default"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("robotomy request", 72,45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :AForm(other){
	*this = other;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
	if (this != &other)
		this->target  = other.target;
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::virtual_execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::srand((std::time(0)));
	int rand = std::rand();

	if (rand % 2 == 0)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << this->target << " the robotomy failed." << std::endl;
}