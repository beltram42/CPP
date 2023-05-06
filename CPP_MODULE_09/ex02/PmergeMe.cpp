/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/06 21:47:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
// ------------------------------------------------------------ Exceptions -- //

// -- Other member functions ------------------------------------------------ //
// ----------------------------------------------- Other  member functions -- //

// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
void ford_johnson_sort(std::list<int>& lst) {
	std::list<int> first, second;

	while (!lst.empty()) {
		if (lst.front() < lst.back() && (second.empty() || lst.front() < second.front())) {
			first.splice(first.end(), lst, lst.begin());
		}
		else if (lst.front() > lst.back() && (first.empty() || lst.front() > first.back())) {
			second.splice(second.begin(), lst, lst.begin());
		}
		else {
			first.splice(first.end(), lst, lst.begin());
		}
	}

	first.sort();
	second.sort();

	std::list<int> merged;
	merged.merge(first);
	merged.merge(second);
	lst.swap(merged);
}
// ***************************************************** Non Member functions //

