/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:22:46 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/29 15:35:47 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


// canonical form

Bureaucrat::Bureaucrat(): name("alae") {
	this->grade = 10;
}

Bureaucrat::Bureaucrat(std::string name, int grade)  : name(name), grade(grade){
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade <= 0)
			throw Bureaucrat::GradeTooHighException();
	}
	catch  (std::exception & e)
	{
		std::cerr << "Bureaucrat " << name << " ";
		throw ;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):name(other.name), grade(other.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		this->grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(){}

// getter

std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

// overloading operator

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.getName() << " bureaucrat grade " << obj.getGrade() << std::endl;
	return os;
}

// member functions

void	Bureaucrat::decrement() {
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::increment() {
	this->grade--;
	if (this->grade <= 0)
		throw Bureaucrat::GradeTooHighException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "is high grade";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "is low grade";
}

void Bureaucrat::signForm(AForm& obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->name + " signed " <<  obj.getName() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << this->name + " couldn't sign " <<  obj.getName() + " because ";
		throw;
	}
}

void	Bureaucrat::executeForm(AForm const & form){
	try
	{
		form.execute(*this);
		std::cout << this->getName() + " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name + " couldn't execute the form " << form.getName()<<  " because the grade is ";
		throw ;
	}
	
}