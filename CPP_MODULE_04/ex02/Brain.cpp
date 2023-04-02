/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:53:55 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 13:51:59 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor Destructor *************************************************** //
Brain::Brain(void)	{
	this->setType("Default");
	std::cout << CLEAR << "Brain: default constructor has been called for: " << this->getType() << std::endl;
}

Brain::Brain(Brain const & inst)	{
	*this = inst;
	std::cout << CLEAR << "Brain: Copy constructor has been called for: "<< this->getType() << std::endl;
}

Brain::Brain(std::string type)	{
	this->setType(type);
	std::cout << CLEAR << "Brain: constructor called for: " << this->getType() << std::endl;
}

Animal::~Brain(void)	{
	std::cout << CLEAR << "Brain: destructor called for: " << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Brain&		Brain::operator=(Brain const & rhs)	{
	std::cout << CLEAR << "Brain: Copy - Assignment operator overload called" << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void			Brain::setType(std::string type)	{
	this->_privateType = type;
}

std::string		Brain::getType(void) const	{
	return (this->_privateType);
}

void		Brain::makeSound(void)	const {
	std::cout << CLEAR << "Alive and kicking!" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //