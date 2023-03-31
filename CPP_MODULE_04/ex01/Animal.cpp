/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:43:16 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 17:10:59 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor Destructor *************************************************** //
Animal::Animal(void)	{
	std::cout << MAGENTA << "Animal default constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

Animal::Animal(Animal const & inst)	{
	*this = inst;
	std::cout << MAGENTA << "Copy constructor has been called for: " << YELLOW << this->getName() << std::endl;
}

Animal::Animal(std::string name)	{
	std::cout << MAGENTA << "Animal constructor called for: " << YELLOW << this->getName() << std::endl;
}

Animal::Animal(std::string name, std::string sound)	{
	std::cout << MAGENTA << "Animal constructor called for: " << YELLOW << this->getName() << std::endl;
}

Animal::~Animal(void)	{
	std::cout << MAGENTA << "Animal destructor called for: " << YELLOW << this->getName() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Animal&		Animal::operator=(Animal const & rhs)	{
	std::cout << MAGENTA "Copy - Assignment operator overload called" CLEAR << std::endl;
	this->setName(rhs.getName());
	this->setSound(rhs.getSound());
	return *this;
}

void			Animal::setName(std::string name)	{
	this->_privateName = name;
}

void			Animal::setSound(std::string sound)	{
	this->_privateSound = sound;
}

std::string		Animal::getName(void) const	{
	return (this->_privateName);
}

std::string		Animal::getSound(void) const	{
	return (this->_privateSound);
}

void		makeSound(void)	{

}

// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &	operator<<(std::ostream & out, Animal const & inst)	{
    out << MAGENTA << "********************************************" << CLEAR << std::endl;
    out << YELLOW "Name: " << inst.getName() << std::endl;
    out << "Sound: " << inst.getSound() << std::endl;
    out << MAGENTA << "********************************************" << CLEAR << std::endl;
    return (out);
}
// ***************************************************** Non Member functions //