/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:43:16 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 10:49:18 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor Destructor *************************************************** //
Animal::Animal(void)	{
	this->setType("Default");
	std::cout << MAGENTA << "Animal default constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

Animal::Animal(Animal const & inst)	{
	*this = inst;
	std::cout << MAGENTA << "Copy constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

Animal::Animal(std::string type)	{
	std::cout << MAGENTA << "Animal constructor called for: " << YELLOW << this->getType() << std::endl;
	this->setType(type);
}

Animal::~Animal(void)	{
	std::cout << MAGENTA << "Animal destructor called for: " << YELLOW << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Animal&		Animal::operator=(Animal const & rhs)	{
	std::cout << MAGENTA << "Animal: Copy - Assignment operator overload called" << CLEAR << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void			Animal::setType(std::string type)	{
	this->_privateType = type;
}

std::string		Animal::getType(void) const	{
	return (this->_privateType);
}

void		Animal::makeSound(void)	const {
	std::cout << "**silence**" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //