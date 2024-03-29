/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/27 14:56:16 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

// Libraries **************************************************************** //
#include <iostream>
#include <exception>
#include <list>
#include <stack>
#include <iterator>
#include <algorithm>
#include <numeric>
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
template <typename T>
class MutantStack : public std::stack<T>	{
public:
	MutantStack(void);												// Canonical
	MutantStack(MutantStack const & toCopy);						// Canonical
	~MutantStack(void);												// Canonical
		
	MutantStack const &	operator=(MutantStack const &toCopy);		// Canonical

	typedef typename std::stack<T>::container_type::iterator	iterator; 
		
	iterator	begin(void);
	iterator	end(void);

protected:
	/* dATA */
private:
	/* dATA */
};

# include "MutantStack.tpp"
// ****************************************************************** Classes //


// Non Member functions ***************************************************** //

// ***************************************************** Non Member functions //

#endif // ************************************************************ MUTANTSTACK_H //