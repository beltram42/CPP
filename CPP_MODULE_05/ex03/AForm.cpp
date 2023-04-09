/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:06:13 by alambert          #+#    #+#             */
/*   Updated: 2023/04/09 14:52:55 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructor Destructor *************************************************** //
AForm::AForm( void ) : _privateName("Placeholder")	{
	this->setIsSigned(false);
	this->setSRG(0);
	this->setERG(0);
	std::cout << "AForm: default contructor called for: " << this->getName() << std::endl;
}

AForm::AForm(AForm const & inst) : _privateName(inst._privateName)	{
	this->setIsSigned(inst.getIsSigned());
	this->setSRG(inst.getSRG());
	this->setERG(inst.getERG());
	std::cout << "AForm: constructor by copy called for: " << this->getName() << std::endl;
}

AForm::AForm(std::string const name, bool issigned,  int signeeGrade, int execGrade, std::string target) : _privateName(name) {
	this->setIsSigned(issigned);
	this->setSRG(signeeGrade);
	this->setERG(execGrade);
	this->setTarget(target);
	if (signeeGrade < HIGHEST_GRADE || execGrade < HIGHEST_GRADE)
		throw AForm::GradeTooHighException();
	if (signeeGrade > LOWEST_GRADE || execGrade > LOWEST_GRADE)
		throw AForm::GradeTooLowException();
	std::cout << "AForm: param contructor called for: " << this->getName() << std::endl;
}

AForm::~AForm( void )	{
	std::cout << "AForm: default destructor called for: " << this->getName() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
AForm &			AForm::operator=(AForm const & rhs)	{
	this->setIsSigned(rhs.getIsSigned());
	return *this;
}

std::string	const	AForm::getName()	const	{
	return (this->_privateName);
}

void			AForm::setIsSigned(bool yn)	{
	this->_privateIsSigned = yn;
}

bool			AForm::getIsSigned()const	{
	return (this->_privateIsSigned);
}

void			AForm::setSRG(int srg)	{
	this->_privateSigneeReqGrade = srg;
}

int				AForm::getSRG()const	{
	return (this->_privateSigneeReqGrade);
}

void			AForm::setERG(int erg)	{
	this->_privateExecReqGrade = erg;
}

int				AForm::getERG()const	{
	return (this->_privateExecReqGrade);
}

void			AForm::setTarget(std::string target)	{
	this->_privateTarget = target;
}

std::string 	AForm::getTarget(void)	const	{
	return (this->_privateTarget);
}

void			AForm::beSigned(Bureaucrat & rhs)	{
	if (rhs.getGrade() > this->getSRG()) {
		throw AForm::GradeTooLowException();
		std::cout << "Bureaucrat: " << rhs.getName() << ", grade: " << rhs.getGrade() << ", has no sign clearance for following form: " << this->getName() << ". (grade " << this->getSRG() << " required." << std::endl;
	}
	else if (this->getIsSigned())	{
		std::cout << this->getName() << " form is already signed off." << std::endl;
		throw AForm::FormSignedOff();
	}
	else
		setIsSigned(true);
}

char const *	AForm::GradeTooHighException::what(void) const throw()	{
	return ((char *)"AForm: Error: Bureaucrat: grade is too high!");
}

char const *	AForm::GradeTooLowException::what(void) const throw()	{
	return ((char *)"AForm: Error: Bureaucrat: grade is too low!");
}

char const *	AForm::FormSignedOff::what(void) const throw()	{
	return ((char *)"AForm: Error: Form: already signed off!");
}

char const *	AForm::UnsignedForm::what(void) const throw()	{
	return ((char *)"AForm: Error: Form: not signed!");
}

// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream&	operator<<( std::ostream & out, AForm const & src)	{
	out << "AForm: " << src.getName() << ", required grade for Signee clearance: " << src.getSRG();
	out << ", required grade for Exec clearance: " << src.getERG() << ", sign status: " << src.getIsSigned();
	out << ", target: " << src.getTarget() << std::endl;
	return (out);
}
// ***************************************************** Non Member functions //

