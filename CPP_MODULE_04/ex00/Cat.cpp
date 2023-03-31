/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:49 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 21:16:03 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor Destructor *************************************************** //
Cat::Cat(void) : Animal("Cat")	{
	std::cout << CYAN << "Cat: Default constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

Cat::Cat(Cat const & inst)	{
	*this = inst;
	std::cout << CYAN << "Cat: Copy constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

Cat::Cat(std::string type)	{
	std::cout << CYAN << "Cat: Constructor called for: " << YELLOW << this->getType() << std::endl;
	this->setType(type);
}

Cat::~Cat(void)	{
	std::cout << CYAN << "Cat: Destructor called for: " << YELLOW << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Cat&		Cat::operator=(Cat const & rhs)	{
	std::cout << CYAN "Cat: Copy - Assignment operator overload called" CLEAR << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void		Cat::makeSound(void) const	{
	std::cout << CYAN << "Cat: meeeowwwww" << CLEAR << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //