/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:14:57 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 21:16:16 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructor Destructor *************************************************** //
WrongAnimal::WrongAnimal(void)	{
	std::cout << MAGENTA << "WrongAnimal: default constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & inst)	{
	*this = inst;
	std::cout << MAGENTA << "WrongAnimal: Copy constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)	{
	std::cout << MAGENTA << "WrongAnimal: constructor called for: " << YELLOW << this->getType() << std::endl;
	this->setType(type);
}

WrongAnimal::~WrongAnimal(void)	{
	std::cout << MAGENTA << "WrongAnimal: destructor called for: " << YELLOW << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)	{
	std::cout << MAGENTA << "WrongAnimal: Copy - Assignment operator overload called" << CLEAR << std::endl;
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
	std::cout << "**wrong**silence**" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //