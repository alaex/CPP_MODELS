/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:47:50 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/26 12:42:48 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string name;
		bool			  sign;
		const int		  gradSign;
		const int		  gradExc;
	public:
	// geter
		const std::string		getName() const;
		bool			getSign() const;
		int		getGradSign() const;
		int		getGradExc() const;
	// canonical form
		Form();
		Form(std::string,  int gradSign , int gradExc);
		Form(const Form&);
		Form& operator=(const Form&);
		~Form();
	// member functions
		void beSigned(const Bureaucrat&);
	// nested classes
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
				public:
					virtual const char* what() const throw();
		};
};
std::ostream&	operator<<(std::ostream& os, const Form& obj);
#endif