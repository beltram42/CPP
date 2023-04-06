/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:45 by alambert          #+#    #+#             */
/*   Updated: 2023/04/06 18:20:13 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructor Destructor *************************************************** //
RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy form", 0, 72, 45), _privateTarget("undefined target")	{
	std::cout << "RobotomyRequestForm: default constructor called for: " << this->getTarget() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & inst): Form(inst.getName(), inst.getIsSigned(), inst.getSRG(), inst.getERG()), _privateTarget(inst.getTarget())	{
	std::cout << "RobotomyRequestForm: constructor by copy called for: " << this->getTarget() << std::endl;
	*this = inst;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form("Robotomy form", 0, 72, 45), _privateTarget(target)	{
	std::cout << "RobotomyRequestForm: constructor called for: " << this->getTarget() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)	{
	std::cout << "RobotomyRequestForm: destructor called for: " << this->getTarget() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
RobotomyRequestForm	&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)	{

}

std::string const		RobotomyRequestForm::getTarget(void) const	{

}

void					RobotomyRequestForm::execute(Bureaucrat const & rhs)	{
	
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //