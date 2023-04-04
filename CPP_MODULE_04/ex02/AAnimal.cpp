/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:41:13 by alambert          #+#    #+#             */
/*   Updated: 2023/04/03 16:41:21 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AAnimal.hpp"

// Constructor Destructor *************************************************** //
AAnimal::AAnimal(void)	{
	this->setType("Default");
	std::cout << CLEAR << "AAnimal: default constructor has been called for: " << this->getType() << std::endl;
}

AAnimal::AAnimal(AAnimal const & inst)	{
	*this = inst;
	std::cout << CLEAR << "AAnimal: Copy constructor has been called for: "<< this->getType() << std::endl;
}

AAnimal::AAnimal(std::string type)	{
	this->setType(type);
	std::cout << CLEAR << "AAnimal: constructor called for: " << this->getType() << std::endl;
}

AAnimal::~AAnimal(void)	{
	std::cout << CLEAR << "AAnimal: destructor called for: " << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
AAnimal&		AAnimal::operator=(AAnimal const & rhs)	{
	std::cout << CLEAR << "AAnimal: Copy - Assignment operator overload called" << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void			AAnimal::setType(std::string type)	{
	this->_privateType = type;
}

std::string	const	AAnimal::getType(void) const	{
	return (this->_privateType);
}

void		AAnimal::makeSound(void)	const {
	std::cout << CLEAR << "**Common AAnimal: Alive and kicking**!" << std::endl;
}

void		AAnimal::getIdeas(void)	const {
	std::cout << CLEAR << "**Common AAnimal: Thinking**!" << std::endl;
}

// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //