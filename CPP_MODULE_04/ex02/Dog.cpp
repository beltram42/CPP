/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:49 by alambert          #+#    #+#             */
/*   Updated: 2023/04/03 16:33:15 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor Destructor *************************************************** //
Dog::Dog(void) : AAnimal::AAnimal("Dog")	{
	std::cout << CLEAR << "Dog: Default constructor has been called for: " << this->getType() << std::endl;
	this->_privateBrain = new Brain ();
}

Dog::Dog(Dog const & inst) : AAnimal::AAnimal(inst), _privateBrain(new Brain(*(inst._privateBrain)))	{
	*this = inst;
	std::cout << CLEAR << "Dog: Copy constructor has been called for: " << this->getType() << std::endl;
}


Dog::~Dog(void)	{
	std::cout << CLEAR << "Dog: Destructor called for: " << this->getType() << std::endl;
	delete (this->_privateBrain);
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Dog&	Dog::operator=(Dog const & rhs)	{
	delete (this->_privateBrain);
	this->_privateBrain = new Brain(*(rhs._privateBrain));
	std::cout << CLEAR << "Dog: Copy - Assignment operator overload called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const	{
	std::cout << CLEAR << "Dog: woooof" << std::endl;
}

void	Dog::getIdeas(void) const	{
	for (int i = 0; i < 100; i++){

		std::cout << this->_privateBrain->getIdeas(i) << std::endl;
	}
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //