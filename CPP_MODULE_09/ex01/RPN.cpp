/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/06 14:48:57 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructor Destructor *************************************************** //
RPN::RPN() : _result(0) {}

RPN::RPN(const std::string &expr) : _result(0) {
    parseInput(expr);
}

RPN::RPN(const RPN &src) {
    *this = src;
}

RPN::~RPN() {}
// *************************************************** Constructor Destructor //


// Member functions ********************************************************* //

// -- Operators overload ---------------------------------------------------- //
RPN &RPN::operator=(const RPN &toCopy) {
    if (this != &toCopy) {
        _result = toCopy._result;
        _stack = toCopy._stack;
    }
    return *this;
}
// ---------------------------------------------------- Operators overload -- //

// -- Functions overload ---------------------------------------------------- //
// ---------------------------------------------------- Functions overload -- //

// -- Accessors ------------------------------------------------------------- //
int RPN::getResult() const {
    return _result;
}
// ------------------------------------------------------------- Accessors -- //

// -- Exceptions ------------------------------------------------------------ //
// ------------------------------------------------------------ Exceptions -- //

// -- Other member functions ------------------------------------------------ //
void RPN::parseInput(const std::string &expr) {
    std::stack<int> s;
    std::istringstream iss(expr);
    std::string token;

    while (iss >> token) {
		std::istringstream	isst(token);
		int					num;
		try	{
			if (isdigit(token[0]) || (token.size() > 1 && this->isOperator(token[0]) && isdigit(token[1])))	{
				isst >> num;
				if (num < -9 || num > 9)
					throw std::range_error("Out of range number");
				s.push(num);
			}
		}
		catch (std::range_error &e) {
            throw e;
        }
		try {
			if (token.size() == 1 && this->isOperator(token[0]))	{
				if (s.size() < 2)
					throw std::invalid_argument("Invalid input 0: number of operands.");
				int right = s.top();
				s.pop();
				if (s.empty())
					throw std::invalid_argument("Invalid input 1: number of operands.");
				int left = s.top();
				s.pop();
				int res = doOperation(token, left, right);
				s.push(res);
			}
		}
		catch (std::invalid_argument &e) {
			throw e;
        }
    }
    if (s.size() != 1)
        throw std::invalid_argument("Invalid input 2: number of operands");
    _result = s.top();
}

int RPN::doOperation(const std::string &op, int left, int right) const {
    int result;

    if (op == "+") {
        if ((left > 0 && right > 0 && left > std::numeric_limits<int>::max() - right) ||
            (left < 0 && right < 0 && left < std::numeric_limits<int>::min() - right)) {
            throw std::overflow_error("Overflow detected in + operator");
        }
        result = left + right;
    }
    else if (op == "-") {
        if ((left > 0 && right < 0 && left > std::numeric_limits<int>::max() + right) ||
            (left < 0 && right > 0 && left < std::numeric_limits<int>::min() + right)) {
            throw std::overflow_error("Overflow detected in - operator");
        }
        result = left - right;
    }
    else if (op == "*") {
        if ((left > 0 && right > 0 && left > std::numeric_limits<int>::max() / right) ||
            (left > 0 && right < 0 && right < std::numeric_limits<int>::min() / left) ||
            (left < 0 && right > 0 && left < std::numeric_limits<int>::min() / right) ||
            (left < 0 && right < 0 && left < std::numeric_limits<int>::max() / right)) {
            throw std::overflow_error("Overflow detected in * operator");
        }
        result = left * right;
    }
    else if (op == "/") {
        if (right == 0)
            throw std::invalid_argument("Division by zero");
        result = left / right;
    }
    else {
        throw std::invalid_argument("Invalid operator");
    }
    return result;
}


bool	RPN::isOperator(int c)	{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (1);
	return (0);
}
// ----------------------------------------------- Other  member functions -- //

// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //
