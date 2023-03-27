/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:53:03 by alambert          #+#    #+#             */
/*   Updated: 2023/03/27 16:01:44 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor Destructor *************************************************** //
Fixed::Fixed( void ) : _privateN(0)	{
	std::cout << "Default constructor called // _privateN set to 0" << std::endl;
}

Fixed::Fixed(Fixed const & inst)	{
	std::cout << "Copy constructor called // returns a copy of *this = inst" << std::endl;
	*this = inst;
}

Fixed::~Fixed(void)	{
	std ::cout << "Destructor called (non virtual)" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Fixed&	Fixed::operator=(Fixed const & rhs)	{
	std::cout << "Copy - Assignment operator overload called // sets _privateN value to the one from rhs instance " << std::endl;
	this->_privateN = rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)	{
	std::cout << "setRawBits - Member function called // sets _privateN to raw" << std::endl;
	this->_privateN = raw;
}

int	Fixed::getRawBits(void)  const	{
	std::cout << "getRawBits - Member function called // returns _privateN" << std::endl;
	return (this->_privateN);
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //