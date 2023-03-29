/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:53:03 by alambert          #+#    #+#             */
/*   Updated: 2023/03/28 16:11:02 by alambert         ###   ########.fr       */
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

Fixed::Fixed(int const n) : _privateN(n << this->_privateNrest)	{
	std::cout << "Int constructor called, _privateN: " << _privateN << std::endl;
}

Fixed::Fixed(float const z)	: _privateN((int)roundf(z * (1 << this->_privateNrest)))	{
	std::cout << "Float constructor called, _privateN: " << _privateN << std::endl;
}

Fixed::~Fixed(void)	{
	std ::cout << "Destructor called (non virtual)" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Fixed&	Fixed::operator=(Fixed const & rhs)	{
	std::cout << "Copy - Assignment operator overload called // sets this->_privateN to rhs._privateN " << std::endl;
	this->_privateN = rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)	{
	std::cout << "setRawBits - Member function called // sets _privateN to raw" << std::endl;
	this->_privateN = raw;
}

int		Fixed::getRawBits(void)  const	{
	return (this->_privateN);
}

float	Fixed::toFloat( void ) const	{
	float z = (float)_privateN / (1 << this->_privateNrest);
	return (z);
}

int		Fixed::toInt( void ) const	{
	return (_privateN >> this->_privateNrest);
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &	operator<<(std::ostream & out, Fixed const & inst)	{
	out << inst.toFloat();
	return	(out);
	}
// ***************************************************** Non Member functions //