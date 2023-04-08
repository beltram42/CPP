/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:10:04 by alambert          #+#    #+#             */
/*   Updated: 2023/04/08 11:48:51 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructor Destructor *************************************************** //
Intern::Intern(void) {
	std::cout << "Intern: default constructor called" << std::endl;
}

Intern::Intern(Intern const & inst)	{
	std::cout << "Intern: constructor by copy called" << std::endl;
	*this = inst;
}

Intern::~Intern(void)	{
	std::cout << "Intern: destructor called" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Intern &	Intern::operator=(Intern const & rhs)	{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

AForm*	Intern::shrubbery(std::string target)	{
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::presidential(std::string target)	{
	return new PresidentialPardonForm(target);
}

AForm*	Intern::robotomy(std::string target)	{
	return new RobotomyRequestForm(target);
}

AForm*	Intern::makeForm(std::string formName, std::string target)	{
	typedef AForm* (Intern::*function)(std::string target);

	function array[3] = {&Intern::shrubbery, &Intern::presidential, &Intern::robotomy};

	std::string	formType[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};
	for (int i = 0; i < 3; i++)	{
		if (formType[i] == formName)	{
			std::cout << "Intern creates " << formType[i] << " form" << std::endl;
			return (this->*array[i])(target);
		}
	}
	throw NonExistentFormException();
	return 0;
}

char const * Intern::NonExistentFormException::what(void) const throw() {
                return("Form does not exist");
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //