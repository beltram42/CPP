/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/08 18:36:49 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

// Libraries **************************************************************** //
#include <iostream>
#include <list>
#include <vector>
#include <sstream>
#include <cmath>
#include <iterator>
#include <exception>
#include <algorithm>
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
class listMIS	{
public:
	listMIS(void);										// Canonical
	listMIS(listMIS const & toCopy);					// Canonical
	listMIS(int argc, char ** argv);
	~listMIS(void);										// Canonical

	listMIS	&operator=(listMIS const & toCopy);			// Canonical

	std::list<unsigned int> 		&getL(void);
	void 							fjMIS(std::list<unsigned int> & lst);

private:
	std::list<unsigned int>			_lst;
	unsigned int					_j;
	unsigned int					_N;					// number of arguments
	unsigned int 					_subLQ;				// sublist quantity
	long unsigned int				_timeS;				// time start
	long unsigned int				_timeE;				// time end
};

class vectorMIS	{
	public:
	vectorMIS(void);									// Canonical
	vectorMIS(vectorMIS const & toCopy);				// Canonical
	vectorMIS(int argc, char ** argv);
	~vectorMIS(void);									// Canonical

	vectorMIS	&operator=(vectorMIS const & toCopy);	// Canonical

	std::vector<unsigned int> 		&getV(void);
	void 							fjMIS(std::vector<unsigned int> & lst);

private:
	std::vector<unsigned int> 		_vec;
	unsigned int					_j;
	unsigned int					_N;					// number of arguments
	unsigned int 					_subVQ;				// subvector quantity
	long unsigned int				_timeS;				// time start
	long unsigned int				_timeE;				// time end
};
// ****************************************************************** Classes //


// Non Member functions ***************************************************** //
std::ostream &operator<<(std::ostream &out, listMIS const &input);
std::ostream &operator<<(std::ostream &out, vectorMIS const &input);
// ***************************************************** Non Member functions //

#endif // ******************************************************** PMERGEME_H //