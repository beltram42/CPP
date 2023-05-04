/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/04 17:41:35 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructor Destructor *************************************************** //
RPN(const std::string &expr)	{
	
}

RPN::~RPN() {}
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
bool RPN::is_operator(const std::string& str) {
    return str == "+" || str == "-" || str == "*" || str == "/";
}

int RPN::calculate() {
    std::stack<int> stack;
    std::istringstream iss(expression);

    std::string token;
    while (iss >> token) {
        if (is_operator(token)) {
            if (stack.size() < 2) {
                throw std::runtime_error("Error: Not enough operands for operator");
            }
            int op2 = stack.top();
            stack.pop();
            int op1 = stack.top();
            stack.pop();
            int result;
			
            if (token == "+") {
                result = op1 + op2;
            } else if (token == "-") {
                result = op1 - op2;
            } else if (token == "*") {
                result = op1 * op2;
            } else if (token == "/") {
                if (op2 == 0) {
                    throw std::runtime_error("Error: Division by zero");
                }
                result = op1 / op2;
            }
            stack.push(result);
        }
		else {
            int operand;
            try {
                operand = std::stoi(token);
            } catch (const std::out_of_range& e) {
                throw std::runtime_error("Error: Out of range operand");
            } catch (const std::invalid_argument& e) {
                throw std::runtime_error("Error: Invalid operand");
            }
            stack.push(operand);
        }
    }

    if (stack.size() != 1) {
        throw std::runtime_error("Error: Too many operands for operators");
    }
    return stack.top();
}

int RPN::perform_operation(const std::string& op, int left, int right) {
    if (op == "+") {
        return left + right;
    } else if (op == "-") {
        return left - right;
    } else if (op == "*") {
        return left * right;
    } else if (op == "/") {
        if (right == 0) {
            throw std::runtime_error("Division by zero");
        }
        return left / right;
    } else {
        throw std::runtime_error("Invalid operator");
    }
}
// ----------------------------------------------- Other  member functions -- //

// ********************************************************* Member functions //


// Non Member functions ***************************************************** //

// ***************************************************** Non Member functions //
