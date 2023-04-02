/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:54:08 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 12:11:35 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor Destructor *************************************************** //
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")	{
	std::cout << CLEAR << "WrongCat: Default constructor has been called for: " << this->getType() << std::endl;
}

WrongCat::WrongCat(WrongCat const & inst) : WrongAnimal("WrongCat")	{
	*this = inst;
	std::cout << CLEAR << "WrongCat: Copy constructor has been called for: " << this->getType() << std::endl;
}

WrongCat::~WrongCat(void)	{
	std::cout << CLEAR << "WrongCat: Destructor called for: " << this->getType() << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
WrongCat&	WrongCat::operator=(WrongCat const & rhs)	{
	std::cout << CLEAR "WrongCat: Copy - Assignment operator overload called" << std::endl;
	this->setType(rhs.getType());
	return *this;
}

void		WrongCat::makeSound(void) const	{
	std::cout << CLEAR << "WongCat: meeeowrong" << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //