/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:57:59 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/27 22:46:42 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// getter

// getter
const std::string	AForm::getName() const
{
	return this->name;
}


bool AForm::getSign() const
{
	return this->sign;
}

int AForm::getGradSign() const 
{
	return this->gradSign;
}

int AForm::getGradExc() const
{
	return this->gradExc;
}
// canonical AForm
AForm::AForm():name("default"), sign(false), gradSign(30), gradExc(40){}

// AForm::AForm(std::string name):name(name), sign(false), gradSign(30), gradExc(40){}
AForm::AForm(std::string name, int gradSign , int gradExc)
	: name(name),  gradSign(gradSign), gradExc(gradExc){}

AForm::AForm(const AForm &other)
    : name(other.name), sign(other.sign), gradSign(other.gradSign), gradExc(other.gradExc) {}

AForm& AForm::operator=(const AForm &other) 
{
    if (this != &other) {
        this->sign = other.sign;
    }
    return *this;
}

AForm::~AForm(){}

// member functions

void AForm::beSigned(const Bureaucrat& target)
{
	if (target.getGrade() <= this->getGradSign())
		sign = true;
	else
		throw AForm::GradeTooLowException();
}

const char  *AForm::GradeTooHighException::what() const throw()
{
	return "too high";
}

const char  *AForm::GradeTooLowException::what() const throw()
{
	return "too low";
}

std::ostream&	operator<<(std::ostream& os, const AForm& obj)
{
	os << "name: " << obj.getName() << "\n";
	os << "sign: " << obj.getSign() << "\n";
	os << "Grad to Sign: " << obj.getGradSign() << "\n";
	os << "Grad to Execute " << obj.getGradExc() << "\n";
	return os;
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSign())
		throw AForm::GradeTooLowException();
	else if (this->getGradExc() < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
		virtual_execute(executor);
}