/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:49 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 20:50:58 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor Destructor *************************************************** //
Dog::Dog(void) : Animal("Dog")	{
	std::cout << GREEN << "Dog: Default constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

Dog::Dog(Dog const & inst)	{
	*this = inst;
	std::cout << GREEN << "Dog: Copy constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

Dog::Dog(std::string type)	{
	std::cout << GREEN << "Dog: Constructor called for: " << YELLOW << this->getType() << std::endl;
	this->setType(type);
}

Dog::~Dog(void)	{
	std::cout << GREEN << "Dog: Destructor called for: " << YELLOW << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Dog&		Dog::operator=(Dog const & rhs)	{
	std::cout << GREEN "Dog: Copy - Assignment operator overload called" CLEAR << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void		makeSound(void)	{
	std::cout << "Dog: woooof" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //