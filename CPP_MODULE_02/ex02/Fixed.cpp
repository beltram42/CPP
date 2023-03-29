/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:53:03 by alambert          #+#    #+#             */
/*   Updated: 2023/03/28 16:14:18 by alambert         ###   ########.fr       */
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
	std ::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const z)	: _privateN((int)roundf(z * (1 << this->_privateNrest)))	{
	std ::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)	{
	std ::cout << "Destructor called (non virtual)" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

void	Fixed::setRawBits(int const raw)	{
	std::cout << "setRawBits - Member function called // sets _privateN to raw" << std::endl;
	this->_privateN = raw;
}

int		Fixed::getRawBits(void)  const	{
	std::cout << "getRawBits - Member function called // returns _privateN" << std::endl;
	return (this->_privateN);
}

float	Fixed::toFloat( void ) const	{
	float z = (float)_privateN / (1 << this->_privateNrest);
	return (z);
}

int		Fixed::toInt( void ) const	{
	return (_privateN >> this->_privateNrest);
}

// Assignement operator overload ------------------------------------------ //
Fixed&	Fixed::operator=(Fixed const & rhs)	{
	std::cout << "Copy - Assignment operator overload called // sets this->_privateN to rhs._privateN " << std::endl;
	this->_privateN = rhs.getRawBits();
	return *this;
}


// Comparison Operators overload ----------------------------------------- //
bool	Fixed::operator>(Fixed const & rhs ) const	{
	if (_privateN > rhs._privateN)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const & rhs ) const {
	if (_privateN < rhs._privateN)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & rhs ) const	{
	if (_privateN >= rhs._privateN)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & rhs ) const	{
	if (_privateN >= rhs._privateN)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & rhs ) const	{
	if (_privateN != rhs._privateN)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & rhs ) const	{
	if (_privateN == rhs._privateN)
		return (true);
	return (false);
}


// Arithmetic operators overload ------------------------------------------- //
Fixed	Fixed::operator+(Fixed const & rhs ) const	{
	Fixed	oper(toFloat() + rhs.toFloat());
	return (oper);
}

Fixed	Fixed::operator-(Fixed const & rhs ) const	{
	Fixed	oper(toFloat() + rhs.toFloat());
	return (oper);
}

Fixed	Fixed::operator*(Fixed const & rhs ) const	{
	Fixed	oper(toFloat() * rhs.toFloat());
	return (oper);
}

Fixed	Fixed::operator/(Fixed const & rhs ) const	{
	Fixed	oper(toFloat() / rhs.toFloat());
	return (oper);
}


// Increment operators overload ------------------------------------------- //
Fixed&	Fixed::operator++(void)	{
	_privateN += 1;
	return *this;
}

Fixed	Fixed::operator++(int)	{
	Fixed temp = *this;
	_privateN += 1;
	return (temp);
}

Fixed&	Fixed::operator--(void)	{
	_privateN -= 1;
	return *this;
}

Fixed	Fixed::operator--(int)	{
	Fixed tmp = *this;
	_privateN -= 1;
	return tmp;
}


// Min-Max operators verload ---------------------------------------------- //
const Fixed&	Fixed::min(Fixed const & a, Fixed const & b)	{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(Fixed const & a, Fixed const & b)	{
	if (a > b)
		return (a);
	return (b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)	{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)	{
	if (a > b)
		return (a);
	return (b);
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &	operator<<(std::ostream & out, Fixed const & inst)	{
	out << inst.toFloat();
	return	(out);
	}
// ***************************************************** Non Member functions //