/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:54:08 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 20:52:03 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor Destructor *************************************************** //
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")	{
	std::cout << CYAN << "WrongCat: Default constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

WrongCat::WrongCat(WrongCat const & inst) : WrongAnimal("WrongCat")	{
	*this = inst;
	std::cout << CYAN << "WrongCat: Copy constructor has been called for: " << YELLOW << this->getType() << std::endl;
}

WrongCat::~WrongCat(void)	{
	std::cout << CYAN << "WrongCat: Destructor called for: " << YELLOW << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
WrongCat&	WrongCat::operator=(WrongCat const & rhs)	{
	std::cout << CYAN "WrongCat: Copy - Assignment operator overload called" CLEAR << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void		makeSound(void)	{
	std::cout << CYAN << "meeeowrong" << CLEAR << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //