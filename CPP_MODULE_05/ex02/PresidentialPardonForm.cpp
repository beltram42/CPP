/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:37 by alambert          #+#    #+#             */
/*   Updated: 2023/04/06 19:24:20 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructor Destructor *************************************************** //
PresidentialPardonForm(void) : Form("President pardon form", 0, 25, 5, "undefined target")	{
	std::cout << "PresidentialPardonForm: default constructor called for: " << this->getTarget() << std::endl;
}

PresidentialPardonForm(PresidentialPardonForm const & inst) : Form(inst.getName(), inst.getIsSigned(), inst.getSRG(), inst.getERG(), _privateTarget(inst.getTarget()))	{
	std::cout << "PresidentialPardonForm: constructor by copy called for: " << this->getTarget() << std::endl;
	*this = inst;
}

PresidentialPardonForm(std::string target) : Form("President pardon form", 0, 25, 5, target)	{
	std::cout << "PresidentialPardonForm: constructor called for: " << this->getTarget() << std::endl;
}

~PresidentialPardonForm(void)	{
	std::cout << "PresidentialPardonForm: destructor called for: " << this->getTarget() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)	{
	Form::operator=(rhs);
	
}

void		PresidentialPardonForm::execute(Bureaucrat const & rhs){
    if (!this->getIsSigned())
		throw FormSignedOff();
    if (rhs.getGrade() > this->getERG())
        throw GradeTooLowException();
    std::cout << "Target: " << this->getTarget() << ", was forgiven by Zaphod Beeblebrox" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //