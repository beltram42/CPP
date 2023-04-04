/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:06:17 by alambert          #+#    #+#             */
/*   Updated: 2023/04/04 18:45:36 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_H
# define FORM_H

// Libraries **************************************************************** //
#include "Bureaucrat.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class Form	{
	
public:
	Form(void);													// Canonical
	Form(Form const & inst);									// Canonical
	
	Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);

	virtual	~Form();											// Canonical

	Form &				operator=(Form const & rhs);			// Canonical

	std::string 		getName()const;
	bool				getIsSigned()const;
	int					getGTS()const;
	int					getGTE()const;

	void				beSigned(Bureaucrat & rhs);

	class	GradeTooHighException : public std::exception	{
			
	public:
		virtual const char *what() const throw();
	};
		
	class	GradeTooLowException : public std::exception	{
		
	public:
		virtual const char *what() const throw();
	};

	class	AlreadySignedException : public std::exception	{

	public:
		virtual char const 	*what(void) const throw();
	}


private:
	Form(void);
	std::string const	_privateName;
	bool				_privateIsSigned;
	int					_privateGradeToSign;
	int					_privateGradeToExecute;
};

// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream &operator<<( std::ostream &out, Bureaucrat const &input );
// ***************************************************** Non Member functions //


#endif // ********************************************************** FORM_H //