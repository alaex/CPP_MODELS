/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:24:10 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 17:54:21 by aen-naas         ###   ########.fr       */
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
	std::ofstream file("Shrubbery " + this->target);
	(void)executor;
	int treeHeight = 10;
	if (!file.is_open())
		return ;
	// 	throw ;
	for (int i = 0; i < treeHeight; ++i) {
        for (int j = 0; j < treeHeight - i - 1; ++j) {
            file << " ";
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            file << "*";
        }

        file << std::endl;
    }
    for (int i = 0; i < treeHeight - 1; ++i) {
        file << " ";
    }
    file << "||" << std::endl;
	file.close();
}