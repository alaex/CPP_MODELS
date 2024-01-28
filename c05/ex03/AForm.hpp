/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:58:31 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 18:01:06 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"


class AForm {
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
	// canonical AForm
		AForm();
		AForm(std::string,  int gradSign , int gradExc);
		AForm(const AForm&);
		AForm& operator=(const AForm&);
		~AForm();
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
		void	execute(Bureaucrat const &) const;
		virtual void	virtual_execute(Bureaucrat const & executor) const = 0;
};
std::ostream&	operator<<(std::ostream& os, const AForm& obj);
#endif