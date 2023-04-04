/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:25 by alambert          #+#    #+#             */
/*   Updated: 2023/04/04 17:40:57 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructor Destructor *************************************************** //
Bureaucrat::Bureaucrat(void) : _privateName("Default"), _privateGrade(LOWEST_GRADE)	{
	std::cout << "Bureaucrat: constructor called for: " << this->getName() << ", " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & inst)	{
	*this = inst;
	std::cout << "Bureaucrat: copy constructor called for: " << this->getName() << ", " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _privateName(name), _privateGrade(grade) {
	if (!exceptionHandler(grade))	{
		this->setGrade(grade);
	}
	std::cout << "Bureaucrat: constructor called for: " << this->getName() << ", " << this->getGrade() << std::endl;	
}

Bureaucrat::~Bureaucrat(void)	{
	std::cout << "Bureaucrat: destructor called for: " << this->getName() << ", " << this->getGrade() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Bureaucrat&		Bureaucrat::operator=(Bureaucrat const & rhs)	{
	this->setGrade(rhs.getGrade());
	return *this;
}

Bureaucrat&		Bureaucrat::operator++()	{
	if (exceptionHandler(this->getGrade() - 1))
		this->setGrade(getGrade() - 1);
	return *this;
}

Bureaucrat&		Bureaucrat::operator--()	{
	if (exceptionHandler(this->getGrade() + 1))
		this->setGrade(getGrade() + 1);
	return *this;
}

std::string		Bureaucrat::getName(void) const	{
	return (this->_privateName);
}

void			Bureaucrat::setGrade(int grade)	{
	this->_privateGrade = grade;
}

int				Bureaucrat::getGrade(void) const{
	return (this->_privateGrade);
}

bool			Bureaucrat::exceptionHandler(int grade)	{
	try	{
		if (grade < HIGHEST_GRADE)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > LOWEST_GRADE)
			throw Bureaucrat::GradeTooLowException();
		else
			return (true);
	}
	catch (std::exception &e)	{
		std::cout << e.what() << std::endl;
	}
	return (false);
}

char const *	Bureaucrat::GradeTooHighException::what(void) const throw()	{
	return ((char *)"Error: Bureaucrat: grade is too high!");
}

char const *	Bureaucrat::GradeTooLowException::what(void) const throw()	{
	return ((char *)"Error: Bureaucrat: grade is too low!");
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream	&operator<<(std::ostream & out, const Bureaucrat & src )	{
	out << "Bureaucrat: " << src.getName() << ", grade: " << src.getGrade() << "." << std::endl;
	return out;
}
// ***************************************************** Non Member functions //