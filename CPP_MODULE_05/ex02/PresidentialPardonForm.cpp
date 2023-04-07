/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:37 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 15:56:44 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructor Destructor *************************************************** //
PresidentialPardonForm::PresidentialPardonForm() : AForm("President pardon form", 0, 25, 5, "undefined target")	{
	std::cout << "PresidentialPardonForm: default constructor called for: " << this->getTarget() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & inst) : AForm(inst.getName(), inst.getIsSigned(), inst.getSRG(), inst.getERG(), inst.getTarget()) {
	std::cout << "PresidentialPardonForm: constructor by copy called for: " << this->getTarget() << std::endl;
	*this = inst;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("President pardon form", 0, 25, 5, target)	{
	std::cout << "PresidentialPardonForm: constructor called for: " << this->getTarget() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)	{
	std::cout << "PresidentialPardonForm: destructor called for: " << this->getTarget() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)	{
	this->setTarget(rhs.getTarget());
	return *this;
}

void		PresidentialPardonForm::execute(Bureaucrat const & rhs) const	{
	try	{
		if (!this->getIsSigned())
			throw FormSignedOff();
		if (rhs.getGrade() > this->getERG())
			throw GradeTooLowException();
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
    std::cout << "PresidentialPardonForm: Target: " << this->getTarget() << " forgiven by Zaphod Beeblebrox! Yooohooo!" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //