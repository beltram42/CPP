/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/06 14:49:49 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

// Libraries **************************************************************** //
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <limits>
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
// **************************************************************** Templates //

// Structs ****************************************************************** //
// ****************************************************************** Structs //

// Classes ****************************************************************** //
class RPN {
public:
    RPN();														// Canonical
    RPN(const std::string &expr);	
    RPN(const RPN &toCopy);										// Canonical
    ~RPN();														// Canonical
    RPN &operator=(const RPN &toCopy);							// Canonical

    int     getResult() const;
    void    parseInput(const std::string &expr);

	bool	isOperator(int c);

private:
    std::stack<int> _stack;
    int _result;

    int doOperation(const std::string &op, int left, int right) const;
};
// ****************************************************************** Classes //


// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //

#endif // ************************************************************* RPN_H //