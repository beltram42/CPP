/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/04 14:28:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

// Libraries **************************************************************** //
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <climits>
#include <exception>
#include <cerrno>
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
class RPN
{
public:
	RPN(void);														// canonical
	RPN(RPN const & toCopy);										// canonical

	~RPN();															// canonical

	RPN const &	operator=(RPN const & toCopy);						// canonical

 	int evaluate(const std::string& expression);

private:
    // int			doOperation(const char& op, const int& x, const int& y);
	bool check_overflow_add(int x, int y);
	bool check_overflow_subtract(int x, int y);
	bool check_overflow_multiply(int x, int y);
};
// ****************************************************************** Classes //


// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //

#endif // ************************************************************* RPN_H //