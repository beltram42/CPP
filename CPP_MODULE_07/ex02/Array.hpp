/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/20 15:16:21 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

// Libraries **************************************************************** //
#include <iostream>
#include <cstdlib>
#include <exception>
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
template <typename T> class Array	{

	public:
		Array<T>(void);											// Canonical
		Array<T>(unsigned int n);
		Array<T>(Array const & toCopy);							// Canonical
		virtual	~Array<T>(void);									// Canonical

		Array<T> const	&operator=(Array const & toCopy);		// Canonical
		T				&operator[](unsigned int n);

		unsigned int	size() const;
		T const	*		getArray() const;

		class invalidIndex : public std::exception	{
		public:
			virtual const char *what() const throw();
		};
	
	protected:
		/*dATA*/

	private:
		unsigned int	_privateSize;
		T *				_privateArray;
};
// **************************************************************** Templates //

// Structs ****************************************************************** //
// ****************************************************************** Structs //

// Classes ****************************************************************** //


// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
template <typename T> std::ostream	&operator<<(std::ostream & out, Array<T > const & rhs);
// ***************************************************** Non Member functions //

#include "./Array.tpp"

#endif // ******************************************************* ARRAY_H //