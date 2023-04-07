/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:45 by alambert          #+#    #+#             */
/*   Updated: 2023/04/07 16:04:15 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructor Destructor *************************************************** //
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy form", 0, 72, 45, "undefined target")	{
	std::cout << "RobotomyRequestForm: default constructor called for: " << this->getTarget() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & inst): AForm(inst.getName(), inst.getIsSigned(), inst.getSRG(), inst.getERG(), inst.getTarget())	{
	std::cout << "RobotomyRequestForm: constructor by copy called for: " << this->getTarget() << std::endl;
	*this = inst;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy form", 0, 72, 45, target)	{
	std::cout << "RobotomyRequestForm: constructor called for: " << this->getTarget() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)	{
	std::cout << "RobotomyRequestForm: destructor called for: " << this->getTarget() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
RobotomyRequestForm	&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)	{
	this->setTarget(rhs.getTarget());
	return *this;
}

void					RobotomyRequestForm::execute(Bureaucrat const & rhs) const	{
	try	{
		if (!this->getIsSigned())
			throw FormSignedOff();
		if (rhs.getGrade() > this->getERG())
			throw GradeTooLowException();
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "BRrrrrrrrrrrrrrrrrrrriiiiiiiiiiiiiiiiiii" << std::endl;
	srand (time(NULL));
	if (rand() % 2)
		std::cout << "BRRRRRIIIIIIIIiiii Zzzrrrr! " << this->getTarget() << "'s robotomisation success!" << std::endl;
	else
		std::cout << "BRrrriii brrrrii brri... " << this->getTarget() << "'s robotomisation failed" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //