/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:45:49 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 19:08:06 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor Destructor *************************************************** //
Cat::Cat(void)	{
	std::cout << MAGENTA << "Animal default constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

Cat::Cat(Animal const & inst)	{
	*this = inst;
	std::cout << MAGENTA << "Copy constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

Cat::Cat(std::string name)	{
	std::cout << MAGENTA << "Animal constructor called for: " << YELLOW << this->getName() << std::endl;
}

Cat::Cat(std::string name, std::string sound)	{
	std::cout << MAGENTA << "Animal constructor called for: " << YELLOW << this->getName() << std::endl;
}

Cat::~Cat(void)	{
	std::cout << MAGENTA << "Animal destructor called for: " << YELLOW << this->getName() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Cat&		Cat::operator=(Cat const & rhs)	{
	std::cout << MAGENTA "Copy - Assignment operator overload called" CLEAR << std::endl;
	this->setName(rhs.getName());
	this->setSound(rhs.getSound());
	return *this;
}


// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //