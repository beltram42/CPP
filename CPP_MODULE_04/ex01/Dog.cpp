/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:49 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 12:08:26 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor Destructor *************************************************** //
Dog::Dog(void) : Animal("Dog")	{
	std::cout << CLEAR << "Dog: Default constructor has been called for: " << this->getType() << std::endl;
}

Dog::Dog(Dog const & inst)	{
	*this = inst;
	std::cout << CLEAR << "Dog: Copy constructor has been called for: " << this->getType() << std::endl;
}

Dog::Dog(std::string type)	{
	std::cout << CLEAR << "Dog: Constructor called for: " << this->getType() << std::endl;
	this->setType(type);
}

Dog::~Dog(void)	{
	std::cout << CLEAR << "Dog: Destructor called for: " << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Dog&		Dog::operator=(Dog const & rhs)	{
	std::cout << CLEAR << "Dog: Copy - Assignment operator overload called" << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void		Dog::makeSound(void) const	{
	std::cout << CLEAR << "Dog: woooof" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //