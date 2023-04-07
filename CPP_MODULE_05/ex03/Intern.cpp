/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:10:04 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 21:35:50 by alambert         ###   ########.fr       */
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
	*this = rhs;
	return *this;
}

AForm *		makeForm(std::string & formName, std::string & target) const	{
	ShrubberyCreationForm	shrub(target);
	RobotomyRequestForm		robot(target);
	PresidentialPardonForm	pres(target);

	std::map<std::string, AForm*>	forms;
	forms.insert(std::make_pair("shrubbery creation", &shrub));
	forms.insert(std::make_pair("robotomy request", &robot));
	forms.insert(std::make_pair("presidential pardon", &pres));
	return (forms[name]);
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //