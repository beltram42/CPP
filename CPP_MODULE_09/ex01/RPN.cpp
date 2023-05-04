/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/04 18:31:55 by alambert         ###   ########.fr       */
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
RPN &RPN::operator=(const RPN &rhs) {
    if (this != &rhs) {
        _result = rhs._result;
        _stack = rhs._stack;
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
        try {
            int num = std::stoi(token);
            if (num < -10 || num > 10)
                throw std::range_error("Out of range number");
            s.push(num);
        }
		catch (std::invalid_argument &e) {
            int right = s.top();
            s.pop();
            if (s.empty())
                throw std::invalid_argument("Invalid input");
            int left = s.top();
            s.pop();
            int res = performOperation(token, left, right);
            s.push(res);
        }
		catch (std::range_error &e) {
            throw e;
        }
    }
    if (s.size() != 1)
        throw std::invalid_argument("Invalid input");
    _result = s.top();
}

int RPN::performOperation(const std::string &op, int left, int right) const {
    int result;

    if (op == "+") {
        result = left + right;
        if ((left > 0 && right > 0 && result < 0) || (left < 0 && right < 0 && result > 0))
            throw std::overflow_error("Overflow detected");
    }
	else if (op == "-") {
        result = left - right;
        if ((left > 0 && right < 0 && result < 0) || (left < 0 && right > 0 && result > 0))
            throw std::overflow_error("Overflow detected");
    }
	else if (op == "*") {
        result = left * right;
        if ((left > 0 && right > 0 && result < 0) || (left < 0 && right < 0 && result < 0) ||
            (left > 0 && right < 0 && result > 0) || (left < 0 && right > 0 && result > 0))
            throw std::overflow_error("Overflow detected");
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
// ----------------------------------------------- Other  member functions -- //

// ********************************************************* Member functions //


// Non Member functions ***************************************************** //

// ***************************************************** Non Member functions //
