/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:14:57 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 12:35:37 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructor Destructor *************************************************** //
WrongAnimal::WrongAnimal(void)	{
	this->setType("Default");
	std::cout << CLEAR << "WrongAnimal: default constructor has been called for: "  << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & inst)	{
	*this = inst;
	std::cout << CLEAR << "WrongAnimal: Copy constructor has been called for: " << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)	{
	this->setType(type);
	std::cout << CLEAR << "WrongAnimal: constructor called for: " << this->getType() << std::endl;
}

WrongAnimal::~WrongAnimal(void)	{
	std::cout << CLEAR << "WrongAnimal: destructor called for: " << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)	{
	std::cout << CLEAR << "WrongAnimal: Copy - Assignment operator overload called" << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void			WrongAnimal::setType(std::string type)	{
	this->_privateType = type;
}

std::string		WrongAnimal::getType(void) const	{
	return (this->_privateType);
}

void		WrongAnimal::makeSound(void) const	{
	std::cout << CLEAR << "WrongAnimal: Wooohoooooo!" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //