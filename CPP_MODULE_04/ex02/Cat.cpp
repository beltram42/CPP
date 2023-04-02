/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:49 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 12:07:38 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor Destructor *************************************************** //
Cat::Cat(void) : Animal("Cat")	{
	std::cout << CLEAR << "Cat: Default constructor has been called for: " << this->getType() << std::endl;
}

Cat::Cat(Cat const & inst)	{
	*this = inst;
	std::cout << CLEAR << "Cat: Copy constructor has been called for: " << this->getType() << std::endl;
}

Cat::Cat(std::string type)	{
	std::cout << CLEAR << "Cat: Constructor called for: " << this->getType() << std::endl;
	this->setType(type);
}

Cat::~Cat(void)	{
	std::cout << CLEAR << "Cat: Destructor called for: " << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Cat&		Cat::operator=(Cat const & rhs)	{
	std::cout << CLEAR << "Cat: Copy - Assignment operator overload called" << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void		Cat::makeSound(void) const	{
	std::cout << CLEAR << "Cat: meeeowwwww" << CLEAR << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //