/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/27 13:36:57 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Constructor Destructor *************************************************** //
template <typename T>
MutantStack<T>::MutantStack(void)	{}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & toCopy)	{
	if (this != &toCopy)
		this->c = toCopy.c;
}

template <typename T>
MutantStack<T>::~MutantStack(void)	{}
// *************************************************** Constructor Destructor //


// Member functions ********************************************************* //

// -- Operators overload ---------------------------------------------------- //
template <typename T>
MutantStack<T> const & MutantStack<T>::operator=(MutantStack<T> const & toCopy)	{
	if (this != &toCopy)
		this->c = toCopy.c;
	return (*this);
}
// ---------------------------------------------------- Operators overload -- //

// -- Functions overload ---------------------------------------------------- //
// ---------------------------------------------------- Functions overload -- //

// -- Accessors ------------------------------------------------------------- //
// ------------------------------------------------------------- Accessors -- //

// -- Exceptions ------------------------------------------------------------ //
// ------------------------------------------------------------ Exceptions -- //

// -- Other member functions ------------------------------------------------ //
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()	{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()	{
	return (this->c.end());
}
// ----------------------------------------------- Other  member functions -- //
// ********************************************************* Member functions //


// Non Member functions ***************************************************** //

// ***************************************************** Non Member functions //
