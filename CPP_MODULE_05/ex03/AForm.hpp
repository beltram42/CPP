/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:06:17 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 15:53:24 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_H
# define AFORM_H

// Libraries **************************************************************** //
# include "Bureaucrat.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class Bureaucrat;

class AForm	{
	
public:
	AForm(void);												// Canonical
	AForm(AForm const & inst);									// Canonical
	
	AForm(std::string const name, bool issigned,  int signeeGrade, int execGrade, std::string target);

	virtual	~AForm();											// Canonical

	AForm &				operator=(AForm const & rhs);			// Canonical

	std::string	const	getName()const;
	void				setIsSigned(bool yn);
	bool				getIsSigned()const;
	void				setSRG(int srg);
	int					getSRG()const;
	void				setERG(int erg);
	int					getERG()const;
	void				setTarget(std::string target);
	std::string			getTarget()const;

	void				beSigned(Bureaucrat & rhs);
	virtual void		execute(Bureaucrat const & rhs) const = 0;


	// -- Exception classes ------------------------------------------------- //
	class	GradeTooHighException : public std::exception	{
			
	public:
		virtual const char *what() const throw();
	};
		
	class	GradeTooLowException : public std::exception	{
		
	public:
		virtual const char *what() const throw();
	};

	class 	FormSignedOff : public std::exception			{
		
	public:
		virtual const char *what() const throw();
	};
	
	// ------------------------------------------------- Exception classes -- //

private:
	std::string const	_privateName;
	bool				_privateIsSigned;
	int					_privateSigneeReqGrade;
	int					_privateExecReqGrade;
	std::string			_privateTarget;
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream&	operator<<( std::ostream & out, AForm const & src);
// ***************************************************** Non Member functions //


#endif // ********************************************************** AFORM_H //
