/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/04 14:25:49 by alambert         ###   ########.fr       */
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
// int		RPN::doOperation(const char& op, const int& x, const int& y) {
//     switch (op) {
//         case '+':
// 			if (x > (INT_MAX - y) || x < (INT_MIN - y))	{
// 				std::cerr << "Error: overflow." << std::endl;
//                 return -1;
// 			}
//             return x + y;
//         case '-':
// 			if (x < (INT_MIN + y) || x > (INT_MAX + y))	{
// 				std::cerr << "Error: overflow." << std::endl;
//                 return -1;
// 			}
//             return x - y;
//         case '*':
// 			if (x > (INT_MAX / y) || x < (INT_MIN / y))	{
// 				std::cerr << "Error: overflow." << std::endl;
//                 return -1;
// 			}
//             return x * y;
//         case '/':
//             if (y == 0) {
//                 std::cerr << "Error: division by zero." << std::endl;
//                 return -1;
//             }
//             return x / y;
//         default:
//             std::cerr << "Error: invalid operator." << std::endl;
//             return -1;
//     }
// }

// int RPN::doOperation(const char& op, const int& x, const int& y) {
//     switch (op) {
//         case '+':
//             return x + y;
//         case '-':
//             return x - y;
//         case '*':
//             return x * y;
//         case '/':
//             if (y == 0) {
//                 std::cerr << "Error: division by zero." << std::endl;
//                 return -1;
//             }
//             return x / y;
//         default:
//             std::cerr << "Error: invalid operator." << std::endl;
//             return -1;
//     }
// }



int		evaluate(const std::string& expression) {
	std::stack<int> stk;
	std::string token;
	std::istringstream iss(expression);
	while (iss >> token) {
		if (isdigit(token[0])) {
			stk.push(std::stoi(token));
		} else {
			if (stk.size() < 2) {
				std::cerr << "Error: invalid input. Not enough operands." << std::endl;
				return INT_MAX;
			}
			int y = stk.top();
			stk.pop();
			int x = stk.top();
			stk.pop();
			int res;
			if (token == "+") {
				if (check_overflow_add(x, y)) {
					std::cerr << "Error: integer overflow detected." << std::endl;
					return INT_MAX;
				}
				res = x + y;
			} else if (token == "-") {
				if (check_overflow_subtract(x, y)) {
					std::cerr << "Error: integer overflow detected." << std::endl;
					return INT_MAX;
				}
				res = x - y;
			} else if (token == "*") {
				if (check_overflow_multiply(x, y)) {
					std::cerr << "Error: integer overflow detected." << std::endl;
					return INT_MAX;
				}
				res = x * y;
			} else if (token == "/") {
				if (y == 0) {
					std::cerr << "Error: division by zero." << std::endl;
					return INT_MAX;
				}
				res = x / y;
			} else {
				std::cerr << "Error: invalid operator." << std::endl;
				return INT_MAX;
			}
			stk.push(res);
		}
	}
	if (stk.size() != 1) {
		std::cerr << "Error: invalid input. Too many operands or operators." << std::endl;
		return INT_MAX;
	}
	int result = stk.top();
	stk.pop();
	return result;
}

bool	RPN::check_overflow_add(int x, int y) {
	if (y > 0) {
		return x > INT_MAX - y;
	} else {
		return x < INT_MIN - y;
	}
}

bool	RPN::check_overflow_subtract(int x, int y) {
	if (y > 0) {
		return x < INT_MIN + y;
	} else {
		return x > INT_MAX + y;
	}
}

bool	RPN::check_overflow_multiply(int x, int y) {
	if (y > 0) {
		return x > INT_MAX / y || x < INT_MIN / y;
	} else if (y < 0) {
		return x > INT_MIN / y || x < INT_MAX / y;
	} else {
		return false;
	}
}

// long long RPN::evaluate(char op, long long x, long long y) {
//     switch (op) {
//         case '+':
//             if ((y > 0 && x > std::numeric_limits<long long>::max() - y) ||
//                 (y < 0 && x < std::numeric_limits<long long>::min() - y)) {
//                 throw std::overflow_error("integer overflow");
//             }
//             return x + y;
//         case '-':
//             if ((y > 0 && x < std::numeric_limits<long long>::min() + y) ||
//                 (y < 0 && x > std::numeric_limits<long long>::max() + y)) {
//                 throw std::overflow_error("integer overflow");
//             }
//             return x - y;
//         case '*':
//             if (y != 0 && (x > std::numeric_limits<long long>::max() / y ||
//                 x < std::numeric_limits<long long>::min() / y)) {
//                 throw std::overflow_error("integer overflow");
//             }
//             return x * y;
//         case '/':
//             if (y == 0) {
//                 throw std::invalid_argument("division by zero");
//             }
//             return x / y;
//         default:
//             throw std::invalid_argument("unknown operator");
//     }
// }

// int		RPN::evaluate(const std::string& input) {
//     std::stack<int> stk;
//     std::string token;
//     std::istringstream iss(input);
//     while (iss >> token) {
//         if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && isdigit(token[1]))) {
//             stk.push(atoi(token.c_str()));
//         }
// 		else {
// 			if (stk.size() < 2) {
// 				std::cerr << "Error: invalid input. Not enough operands." << std::endl;
// 				return -1;
// 			}
// 			int y = stk.top();
// 			stk.pop();
// 			int x = stk.top();
// 			stk.pop();
// 			int res = doOperation(token[0], x, y);
// 			stk.push(res);
//         }
//     }
//     if (stk.size() != 1) {
//         std::cerr << "Error: invalid input. Too many operands or operators." << std::endl;
//         return -1;
//     }
//     return stk.top();
// }
// ***************************************************** Non Member functions //
