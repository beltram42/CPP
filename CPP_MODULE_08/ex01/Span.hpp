/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/26 21:14:28 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

// Libraries **************************************************************** //
#include <iostream>
#include <exception>
#include <vector>
#include <numeric>
#include <algorithm>
#include <list>
#include <iterator>
#include <limits>
#include <cstdlib>
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
#include <limits>
// Structs ****************************************************************** //
// ****************************************************************** Structs //

// Classes ****************************************************************** //
class Span
{
public:
	Span(Span const & toCopy);										// Canonical
	Span(unsigned int number);
	virtual ~Span();												// Canonical

	Span &						operator=(Span const & toCopy);					// Canonical

	void						setN(unsigned int number);
	unsigned int				getN(void) const;
	std::vector<int> &			getV(void);

	void						addNumber(unsigned int number);

	template <typename Iterator>
    void 						addNumbers(std::vector<unsigned int>::iterator its, std::vector<unsigned int>::iterator ite);

	unsigned int				shortestSpan(void);
	unsigned int				longestSpan(void);


	class NotEnoughNumbersException : public std::exception	{
	public:
		virtual const char*	what() const throw();
	};

	class ArleadyFullException : public std::exception	{
	public:
		virtual const char*	what() const throw();
	};

protected:
	/* dATA */

private:
	unsigned int		_N;
	std::vector<int>	_V;
	
	Span(void);														// Canonical
};

// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream &operator<<(std::ostream & out, Span & rhs);
// ***************************************************** Non Member functions //

#endif // ************************************************************ SPAN_H //