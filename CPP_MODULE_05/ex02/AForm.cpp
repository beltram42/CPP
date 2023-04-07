/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:06:13 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 11:09:48 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructor Destructor *************************************************** //
Form::Form( void ) : _privateName("Placeholder")	{
	this->setIsSigned(false);
	this->setSRG(0);
	this->setERG(0);
	std::cout << "Form: default contructor called for: " << this->getName() << std::endl;
}

Form::Form(Form const & inst) : _privateName(inst._privateName)	{
	this->setIsSigned(inst.getIsSigned());
	this->setSRG(inst.getSRG());
	this->setERG(inst.getERG());
	std::cout << "Form: constructor by copy called for: " << this->getName() << std::endl;
}

Form::Form(std::string const name, int signeeGrade, int execGrade, std::string target) : _privateName(name) {
	this->setIsSigned(false);
	this->setSRG(signeeGrade);
	this->setERG(execGrade);
	if (signeeGrade < HIGHEST_GRADE || execGrade < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	if (signeeGrade > LOWEST_GRADE || execGrade > LOWEST_GRADE)
		throw Form::GradeTooLowException();
	std::cout << "Form: param contructor called for: " << this->getName() << std::endl;
}

Form::~Form( void )	{
	std::cout << "Form: default destructor called for: " << this->getName() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Form &			Form::operator=(Form const & rhs)	{
	this->_setIsSigned(rhs.getIsSigned());
	return *this;
}

std::string	const	Form::getName()	const	{
	return (this->_privateName);
}

void			Form::setIsSigned(bool yn)	{
	this->_privateIsSigned = yn;
}

bool			Form::getIsSigned()const	{
	return (this->_privateIsSigned);
}

void			Form::setSRG(int srg)	{
	this->_privateSigneeReqGrade = srg;
}

int				Form::getSRG()const	{
	return (this->_privateSigneeReqGrade);
}

void			Form::setERG(int erg)	{
	this->_privateExecReqGrade = erg;
}

int				Form::getERG()const	{
	return (this->_privateExecReqGrade);
}

void			Form::setTarget(std::string target)	{
	this->_privateTarget = target;
}

std::string 	Form::getTarget(void)	const	{
	return (this->_privateTarget);
}

void			Form::beSigned(Bureaucrat & rhs)	{
	if (rhs.getGrade() > this->getSRG()) {
		throw Form::GradeTooLowException();
		std::cout << "Bureaucrat: " << rhs.getName() << ", grade: " << rhs.getGrade() << ", has no sign clearance for following form: " << this->getName() << ". (grade " << this->getSRG() << " required." << std::endl;
	}
	else if (this->getIsSigned())	{
		std::cout << this->getName() << " form is already signed off." << std::endl;
		throw Form::FormSignedOff();
	}
	else
		setIsSigned(true);
}

char const *	Form::GradeTooHighException::what(void) const throw()	{
	return ((char *)"Form: Error: Bureaucrat: grade is too high!");
}

char const *	Form::GradeTooLowException::what(void) const throw()	{
	return ((char *)"Form: Error: Bureaucrat: grade is too low!");
}

char const *	Form::FormSignedOff::what(void) const throw()	{
	return ((char *)"Form: Error: Form: already signed off!");
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream&	operator<<( std::ostream & out, Form const & src)	{
	out << "Form: " << src.getName() << ", required grade for Signee clearance: " << src.getSRG();
	out << ", required grade for Exec clearance: " << src.getERG() << ", sign status: " << src.getIsSigned();
	out << ", target: " << src.getTarget() << std::endl;
	return (out);
}
// ***************************************************** Non Member functions //

