/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:53:08 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 11:25:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

// Libraries **************************************************************** //
#include <iostream>
#include <cmath>
// **************************************************************** Libraries //


// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Colours ****************************************************************** //
// ****************************************************************** Colours //


// Classes ****************************************************************** //
class	Fixed	{

public:
	Fixed(void);												// Canonical
	Fixed(Fixed const & inst);									// Canonical
	Fixed(int const n);
	Fixed(float const z);

	~Fixed(void);												// Canonical


	void				setRawBits(int const raw);
	int					getRawBits(void) const;

	float				toFloat( void ) const;
	int					toInt( void ) const;


	Fixed &				operator=(Fixed const & rhs);			// Canonical

	Fixed	operator+(Fixed const & rhs) const ;
	Fixed	operator-(Fixed const & rhs) const ;
	Fixed	operator*(Fixed const & rhs) const ;
	Fixed	operator/(Fixed const & rhs) const ;

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	bool	operator<(Fixed const & rhs) const ;
	bool	operator>(Fixed const & rhs) const ;
	bool	operator>=(Fixed const & rhs) const ;
	bool	operator<=(Fixed const & rhs) const ;
	bool	operator!=(Fixed const & rhs) const ;
	bool	operator==(Fixed const & rhs) const ;

	static Fixed&		min(Fixed& a, Fixed& b);
	static Fixed&		max(Fixed& a, Fixed& b);
	static const Fixed&	min(Fixed const & a, Fixed const & b);
	static const Fixed&	max(Fixed const & a, Fixed const & b);


private:

	int					_privateN;
	int static const	_privateNrest = 8;				//bin point position

};
// ****************************************************************** Classes //


// Non Member functions ***************************************************** //
std::ostream &			operator<<(std::ostream & out, Fixed const & inst);
// ***************************************************** Non Member functions //


#endif // ********************************************************** FIXED_H //