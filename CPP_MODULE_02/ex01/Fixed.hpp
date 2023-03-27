/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:53:08 by alambert          #+#    #+#             */
/*   Updated: 2023/03/27 18:08:20 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

// Libraries **************************************************************** //
#include <iostream>
#include <string>
#include <cmath>
// **************************************************************** Libraries //


// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Colours ****************************************************************** //
// ****************************************************************** Colours //


// Classes ****************************************************************** //
class	Fixed	{

public:
	Fixed(void);												// Cannonical
	Fixed(Fixed const & inst);									// Cannonical
	Fixed(int const n);
	Fixed(float const z);

	~Fixed(void);												// Cannonical

	Fixed &				operator=(Fixed const & rhs);			// Cannonical


	void				setRawBits(int const raw);
	int					getRawBits(void) const;

	float				toFloat( void ) const;
	int					toInt( void ) const;
	

private:

	int					_privateN;
	int static const	_privateNrest = 8;				//bin point position

};
// ****************************************************************** Classes //


// Non Member functions ***************************************************** //
std::ostream &			operator<<(std::ostream & out, Fixed const & inst);
// ***************************************************** Non Member functions //


#endif // ********************************************************** FIXED_H //