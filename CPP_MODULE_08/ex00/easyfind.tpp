/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/23 18:49:33 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"

// Constructor Destructor *************************************************** //
// *************************************************** Constructor Destructor //


// Member functions ********************************************************* //

// -- Operators overload ---------------------------------------------------- //
// ---------------------------------------------------- Operators overload -- //

// -- Functions overload ---------------------------------------------------- //
// ---------------------------------------------------- Functions overload -- //

// -- Accessors ------------------------------------------------------------- //
// ------------------------------------------------------------- Accessors -- //


// -- Exceptions ------------------------------------------------------------ //
const char *		OccurrenceNotFound::what() const throw()	{
	return ("Element not found");
}
// ------------------------------------------------------------ Exceptions -- //


// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
template <typename T> 
typename T::iterator   easyfind(T & container, int & toFind)	{
	typename T::iterator	it;
	typename T::iterator	its = container.begin();
	typename T::iterator	ite = container.end();

	it = std::find(its, ite, toFind);
	if (it != ite)
		return (it);
	else
		throw(OccurrenceNotFound());
}

