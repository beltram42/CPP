/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/05/02 23:21:50 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// int main(int argc, char** argv) {
//     std::stack<int> stk;
//     std::string input;
//     std::string token;
//     if (argc < 2)
//         return (0);
//     if (argc == 2) {
//         input = argv[1];
//         std::istringstream iss(input);
//         while (iss >> token) {
//             if (isdigit(token[0])) {
//                 stk.push(atoi(token.c_str()));
//             } 
// 			else {
//                 if (stk.size() < 2) {
//                     std::cerr << "Error: invalid input. Not enough operands." << std::endl;
//                     return (1);
//                 }
//                 int y = stk.top();
//                 stk.pop();
//                 int x = stk.top();
//                 stk.pop();
//                 int res = evaluate(token[0], x, y);
//                 stk.push(res);
//             }
//         }
//         if (stk.size() != 1) {
//             std::cerr << "Error: invalid input. Too many operands or operators." << std::endl;
//             return (1);
//         }
// 		if (errno == EDOM)	{
// 			std::cerr << "Error: EDOM: division by zero." << std::endl;
// 			return (1);
// 		}
// 		if (errno == ERANGE)	{
// 			std::cerr << "Error: ERANGE: result greater than INT_MIN." << std::endl;
// 			return (1);
// 		}
//         int result = stk.top();
//         std::cout << result << std::endl;
//     } else if (argc > 2) {
//         std::cerr << "Error: invalid input. Too many arguments." << std::endl;
//     }
//     return (0);
// }

int main(int argc, char** argv) {
    std::stack<int> stk;
    std::string input;
    std::string token;
    if (argc < 2)
        return (0);
    if (argc == 2) {
        input = argv[1];
        std::istringstream iss(input);
        while (iss >> token) {
            if (isdigit(token[0]) || (token[0] == '-' || token[0] == '+')) {
                if (token[0] == '-' && !isdigit(token[1])) {
                    std::cerr << "Error: invalid input. Invalid negative integer." << std::endl;
                    return (1);
                }
                stk.push(atoi(token.c_str()));
            }
			else {
                if (stk.size() < 2) {
                    std::cerr << "Error: invalid input. Not enough operands." << std::endl;
                    return (1);
                }
                int y = stk.top();
                stk.pop();
                int x = stk.top();
                stk.pop();
				if (checkLimits(token[0], x, y))	{
					std::cerr << "Error: invalid input. ERANGE." << std::endl;
                    return (0);
				}
				std::cout << errno << std::endl;
				if (checkDiv(token[0], x, y))	{
					std::cerr << "Error: invalid input. EDOM." << std::endl;
					return (0);
				}
                int res = evaluate(token[0], x, y);
                stk.push(res);
            }
        }
        if (stk.size() != 1) {
            std::cerr << "Error: invalid input. Too many operands or operators." << std::endl;
            return (1);
        }
        int result = stk.top();
        std::cout << result << std::endl;
    } else if (argc > 2) {
        std::cerr << "Error: invalid input." << std::endl;
    }
    return (0);
}