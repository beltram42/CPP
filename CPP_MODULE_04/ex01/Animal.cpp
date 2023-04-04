/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:43:16 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 14:10:25 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor Destructor *************************************************** //
Animal::Animal(void)	{
	this->setType("Default");
	std::cout << CLEAR << "Animal: default constructor has been called for: " << this->getType() << std::endl;
}

Animal::Animal(Animal const & inst)	{
	*this = inst;
	std::cout << CLEAR << "Animal: Copy constructor has been called for: "<< this->getType() << std::endl;
}

Animal::Animal(std::string type)	{
	this->setType(type);
	std::cout << CLEAR << "Animal: constructor called for: " << this->getType() << std::endl;
}

Animal::~Animal(void)	{
	std::cout << CLEAR << "Animal: destructor called for: " << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Animal&		Animal::operator=(Animal const & rhs)	{
	std::cout << CLEAR << "Animal: Copy - Assignment operator overload called" << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void			Animal::setType(std::string type)	{
	this->_privateType = type;
}

std::string	const	Animal::getType(void) const	{
	return (this->_privateType);
}

void		Animal::makeSound(void)	const {
	std::cout << CLEAR << "**Common Animal: Alive and kicking**!" << std::endl;
}

void		Animal::getIdeas(void)	const {
	std::cout << CLEAR << "**Common Animal: Thinking**!" << std::endl;
}

// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //