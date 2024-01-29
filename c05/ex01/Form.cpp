/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:47:30 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/29 18:31:06 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
// getter
const std::string	Form::getName() const
{
	return this->name;
}


bool Form::getSign() const
{
	return this->sign;
}

int Form::getGradSign() const 
{
	return this->gradSign;
}

int Form::getGradExc() const
{
	return this->gradExc;
}
// canonical form
Form::Form():name("default"), sign(false), gradSign(30), gradExc(40) {}

Form::Form(std::string name, int gradSign , int gradExc): name(name),  gradSign(gradSign), gradExc(gradExc){
	try
	{
		if (gradSign > 150)
			throw Form::GradeTooLowException();
		else if (gradSign <= 0)
			throw Form::GradeTooHighException();
	}
	catch  (std::exception & e)
	{
		std::cerr << "Form " << name << " grade is ";
		throw ;
	}
}

Form::Form(const Form &other)
    : name(other.name), sign(other.sign), gradSign(other.gradSign), gradExc(other.gradExc) {}

Form& Form::operator=(const Form &other) 
{
    if (this != &other) {
        this->sign = other.sign;
    }
    return *this;
}

Form::~Form(){}

// member functions

void Form::beSigned(const Bureaucrat& target)
{
	if (target.getGrade() <= this->getGradSign())
		sign = true;
	else
		throw Form::GradeTooLowException();
}

const char  *Form::GradeTooHighException::what() const throw()
{
	return "too high";
}

const char  *Form::GradeTooLowException::what() const throw()
{
	return "too low";
}

std::ostream&	operator<<(std::ostream& os, const Form& obj)
{
	os << "name: " << obj.getName() << "\n";
	os << "sign: " << obj.getSign() << "\n";
	os << "Grad to Sign: " << obj.getGradSign() << "\n";
	os << "Grad to Execute " << obj.getGradExc() << "\n";
	return os;
}
