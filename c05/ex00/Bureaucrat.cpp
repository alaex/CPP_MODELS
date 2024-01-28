/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:22:46 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 17:20:45 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// caninical form

Bureaucrat::Bureaucrat(): name("alae"), grade(1){
}

Bureaucrat::Bureaucrat(std::string name, int grade)  : name(name), grade(grade){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
}


Bureaucrat::Bureaucrat(const Bureaucrat& other):name(other.name), grade(other.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this == &other)
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
	return "you did pass too high grade";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "you did pass too low grade";
}
