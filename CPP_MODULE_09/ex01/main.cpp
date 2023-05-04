/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/05/04 14:27:31 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
    /*if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [RPN expression]" << std::endl;
        return 1;
    }
	else if (argc > 2) {
        std::cerr << "Error: invalid input." << std::endl;
    }
    RPN rpn;
    std::string input = argv[1];
    int result = rpn.evaluate(input);*/
    /*if (result != -1) {
        std::cout << result << std::endl;
    }
	if (argc != 2) {
        std::cerr << "Error: invalid input" << std::endl;
        return 1;
    }
    try {
        RPN rpn;
        long long result = rpn.evaluate(argv[1]);
        std::cout << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
    return 0;*/
	if (argc < 2) {
        std::cerr << "Error: missing expression." << std::endl;
        return 1;
    }
	if (argc > 2) {
        std::cerr << "Error: invalid input" << std::endl;
        return 1;
    }
    RPN calculator;
    int result = calculator.evaluate(argv[1]);
    if (result == INT_MAX) {
        return 1;
    } else {
        std::cout << result << std::endl;
        return 0;
    }
}