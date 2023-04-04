/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:49 by alambert          #+#    #+#             */
/*   Updated: 2023/04/03 16:06:16 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor Destructor *************************************************** //
Cat::Cat(void) : Animal::Animal("Cat")	{
	this->_privateBrain = new Brain();
	std::cout << CLEAR << "Cat: Default constructor has been called for: " << this->getType() << std::endl;
}

Cat::Cat(Cat const & inst) : Animal::Animal(inst), _privateBrain(new Brain(*(inst._privateBrain)))	{
	*this = inst;
	std::cout << CLEAR << "Cat: Copy constructor has been called for: " << this->getType() << std::endl;
}

Cat::~Cat(void)	{
	std::cout << CLEAR << "Cat: Destructor called for: " << this->getType() << std::endl;
	delete (this->_privateBrain);
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Cat&	Cat::operator=(Cat const & rhs)	{
	delete (this->_privateBrain);
	this->_privateBrain = new Brain(*(rhs._privateBrain));
	std::cout << CLEAR << "Cat: Copy - Assignment operator overload called" << std::endl;
	return *this;
}

void	Cat::makeSound(void) const	{
	std::cout << CLEAR << "Cat: meeeowwwww" << CLEAR << std::endl;
}

void	Cat::getIdeas(void) const	{
	for (int i = 0; i < 100; i++){

		std::cout << this->_privateBrain->getIdeas(i) << std::endl;
	}
}
// ********************************************************* Member functions //

// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //