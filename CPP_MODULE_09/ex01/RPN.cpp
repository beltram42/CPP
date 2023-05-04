/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/04 12:22:14 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructor Destructor *************************************************** //
RPN::RPN()	{
}

RPN::~RPN()	{
}
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
int		RPN::doOperation(const char& op, const int& x, const int& y) {
    switch (op) {
        case '+':
			if (x > (INT_MAX - y) || x < (INT_MIN - y))	{
				std::cerr << "Error: overflow." << std::endl;
                return -1;
			}
            return x + y;
        case '-':
			if (x < (INT_MIN + y) || x > (INT_MAX + y))	{
				std::cerr << "Error: overflow." << std::endl;
                return -1;
			}
            return x - y;
        case '*':
			if (x > (INT_MAX / y) || x < (INT_MIN / y))	{
				std::cerr << "Error: overflow." << std::endl;
                return -1;
			}
            return x * y;
        case '/':
            if (y == 0) {
                std::cerr << "Error: division by zero." << std::endl;
                return -1;
            }
            return x / y;
        default:
            std::cerr << "Error: invalid operator." << std::endl;
            return -1;
    }
}

int		RPN::evaluate(const std::string& input) {
    std::stack<int> stk;
    std::string token;
    std::istringstream iss(input);
    while (iss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && isdigit(token[1]))) {
            stk.push(atoi(token.c_str()));
        }
		else {
			if (stk.size() < 2) {
				std::cerr << "Error: invalid input. Not enough operands." << std::endl;
				return -1;
			}
			int y = stk.top();
			stk.pop();
			int x = stk.top();
			stk.pop();
			int res = doOperation(token[0], x, y);
			stk.push(res);
        }
    }
    if (stk.size() != 1) {
        std::cerr << "Error: invalid input. Too many operands or operators." << std::endl;
        return -1;
    }
    return stk.top();
}
// ***************************************************** Non Member functions //
