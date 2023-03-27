/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:53:03 by alambert          #+#    #+#             */
/*   Updated: 2023/03/27 19:01:43 by alambert         ###   ########.fr       */
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
	std::cout << std::endl;
	std::cout << "Int constructor called" << std::endl;
	std::cout << "_privateN: " << _privateN << std::endl;
	std::cout << "n: " << n << std::endl;
	std::cout << "this->_privateNrest: " << this->_privateNrest << std::endl;
	std::cout << "(n << this->_privateNrest): " << ((n << this->_privateNrest)) << std::endl;
	std ::cout << "Int constructor called" << std::endl;
	std::cout << std::endl;
}

Fixed::Fixed(float const z)	: _privateN((int)roundf(z * (1 << this->_privateNrest)))	{
	std::cout << std::endl;
	std::cout << "Float constructor called" << std::endl;
	std::cout << "_privateN: " << _privateN << std::endl;
	std::cout << "z: " << z << std::endl;
	std::cout << "this->_privateNrest: " << this->_privateNrest << std::endl;
	std::cout << "(1 << this->_privateNrest): " << ((1 << this->_privateNrest)) << std::endl;
	std::cout << "z * (1 << this->_privateNrest): " << (z* (1 << this->_privateNrest)) << std::endl;
	std::cout << "roundf(z * (1 << this->_privateNrest)): " << (roundf(z* (1 << this->_privateNrest))) << std::endl;
	std ::cout << "Float constructor called" << std::endl;
	std::cout << std::endl;
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
	std::cout << "getRawBits - Member function called // returns _privateN" << std::endl;
	return (this->_privateN);
}

float	Fixed::toFloat( void ) const	{
	std::cout << std::endl;
	std::cout << "toFloat"<<std::endl;
	std::cout << "_privateN: " << _privateN << std::endl;
	std::cout << "this->_privateNrest: " << this->_privateNrest << std::endl;
	std::cout << "(1 << this->_privateNrest): " << ((1 << this->_privateNrest)) << std::endl;
	std::cout << "_privateN / (1 << this->_privateNrest): " << (_privateN / (1 << this->_privateNrest)) << std::endl;
	std::cout << std::endl;
	float z = (float)_privateN / (1 << this->_privateNrest);
	return (z);
}

int		Fixed::toInt( void ) const	{
	std::cout << std::endl;
	std::cout << "toInt" << std::endl;
	std::cout << "_privateN: " << _privateN << std::endl;
	std::cout << "this->_privateNrest: " << this->_privateNrest << std::endl;
	std::cout << "(_privateN << this->_privateNrest): " << ((_privateN << this->_privateNrest)) << std::endl;
	std::cout << std::endl;
	return (_privateN >> this->_privateNrest);
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &	operator<<(std::ostream & out, Fixed const & inst)	{
	std::cout << ": ";
	out << inst.toFloat();
	return	(out);
	}
// ***************************************************** Non Member functions //