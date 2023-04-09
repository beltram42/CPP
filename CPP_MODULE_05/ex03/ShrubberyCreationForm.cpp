/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:08:53 by alambert          #+#    #+#             */
/*   Updated: 2023/04/09 15:20:00 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructor Destructor *************************************************** //
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery form", 0, 145, 137, "undefined target")	{
	std::cout << "ShrubberyCreationForm: default constructor called for: " << this->getTarget() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & inst): AForm(inst.getName(), inst.getIsSigned(), inst.getSRG(), inst.getERG(), inst.getTarget())	{
	std::cout << "ShrubberyCreationForm: constructor by copy called for: " << this->getTarget() << std::endl;
	*this = inst;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery form", 0, 145, 137, target)	{
	std::cout << "ShrubberyCreationForm: constructor called for: " << this->getTarget() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)	{
	std::cout << "ShrubberyCreationForm: destructor called for: " << this->getTarget() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)	{
	this->setTarget(rhs.getTarget());
	return *this;
}

void					ShrubberyCreationForm::execute(Bureaucrat const & rhs) const	{
	try	{
		if (!this->getIsSigned())
			throw UnsignedForm();
		if (rhs.getGrade() > this->getERG())
			throw GradeTooLowException();
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
		return;
	}
	std::cout << rhs.getName() << " executed " << this->getName() << std::endl;
	std::string outfile = AForm::getTarget() + "_shrubbery";
	std::ofstream tree(outfile.c_str());
	if (!tree)	{
        std::cout << GREEN << "ShrubberyCreationForm: Error: not able to create the file" << CLEAR << std::endl;
        return;
    }
	tree << "                 " << std::endl;
	tree << "        !        " << std::endl;
	tree << "        !        " << std::endl;
	tree << "       / \\      " << std::endl;
	tree << "      /   \\     " << std::endl;
	tree << "     /_____\\    " << std::endl;
	tree << "    / |   | \\   " << std::endl;
	tree << "   /__|___|__\\  " << std::endl;
	tree << "      [___]      " << std::endl;
	tree << "                 " << std::endl;
	tree << "                 " << std::endl;
	tree << "        !        " << std::endl;
	tree << "        !        " << std::endl;
	tree << "       / \\      " << std::endl;
	tree << "      /   \\     " << std::endl;
	tree << "     /_____\\    " << std::endl;
	tree << "    / |   | \\   " << std::endl;
	tree << "   /__|___|__\\  " << std::endl;
	tree << "      [___]      " << std::endl;
	tree << "                 " << std::endl;
}

// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //