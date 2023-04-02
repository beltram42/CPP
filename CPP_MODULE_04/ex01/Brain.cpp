/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:53:55 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 14:59:31 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string randId[2] = 
{
	"No No, No No No No, ",
    "there's no limit!",
};


// Constructor Destructor *************************************************** //
Brain::Brain(void)	{
	this->setIdeas(randId);
	std::cout << CLEAR << "Brain: default constructor called." << std::endl;
}

Brain::Brain(Brain const & inst)	{
	*this = inst;
	std::cout << CLEAR << "Brain: Copy constructor has been called for: "<< this->getType() << std::endl;
}

Animal::~Brain(void)	{
	std::cout << CLEAR << "Brain: destructor called for: " << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Brain&		Brain::operator=(Brain const & rhs)	{
	std::cout << CLEAR << "Brain: Copy - Assignment operator overload called" << std::endl;
	this->setType(rhs.getIdea());
	return *this;
}

void			Brain::setType(std::string type)	{
	this->_privateType = type;
}

void		Brain::makeSound(void)	const {
	std::cout << CLEAR << "Alive and kicking!" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //