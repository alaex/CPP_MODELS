/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:24:10 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/29 17:38:31 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
	:AForm("shrubbery creation", 72,45),target("default"){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("shrubbery creation", 72,45), target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):AForm(other){
	*this = other;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
	if (this != &other)
		this->target  = other.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::virtual_execute(Bureaucrat const & executor) const
{
	std::ofstream file(this->target + "_shrubbery");
	(void)executor;
	if (!file.is_open())
		throw std::runtime_error("couldn't open the file");
	// 	throw ;
	file << "      ^      " << std::endl;
    file << "     ^^^     " << std::endl;
    file << "    ^^^^^    " << std::endl;
    file << "   ^^^^^^^   " << std::endl;
    file << "  ^^^^^^^^^  " << std::endl;
    file << " ^^^^^^^^^^^ " << std::endl;
    file << "^^^^^^^^^^^^^" << std::endl;
    file << "      ||      " << std::endl;
	file.close();
}
