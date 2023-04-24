/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/24 10:37:10 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

// Libraries **************************************************************** //
#include <iostream>
#include <list>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
#define CLEAR "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"
#define MAGENTA "\e[35m"
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Templates **************************************************************** //
// **************************************************************** Templates //

// Structs ****************************************************************** //
// ****************************************************************** Structs //

// Classes ****************************************************************** //
class Span
{
public:
	Span(Span const & toCopy);						// Cananical
	Span(unsigned int number);
	virtual ~Span();								// Cananical

	Span const	&operator=(Span const & toCopy);	// Cananical

	void			setN(unsigned int);
	unsigned int	getN(void) const;

	void			addNumber(unsigned int);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);

private:
	Span(/* args */);								// Cananical
	unsigned int	_N
};



class ArleadyFullException : public std::exception	{
public:
	virtual const char *what() const throw();
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
template <typename T> 
typename T::iterator   easyfind(T & container, int & toFind);
// ***************************************************** Non Member functions //

#endif // ******************************************************** EASYFIND_H //