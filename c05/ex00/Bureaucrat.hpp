/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:19:12 by aen-naas          #+#    #+#             */
/*   Updated: 2024/01/28 12:02:07 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat {
	private:
		const std::string name;
		int			grade;
	public:
	// canonical form
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();
	// getter 
		std::string		getName() const;
		int 			getGrade() const;
	// member function
		void			increment();
		void			decrement();
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
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj);


#endif