/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/05/04 12:07:38 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " [RPN expression]" << std::endl;
        return 1;
    }
	else if (argc > 2) {
        std::cerr << "Error: invalid input." << std::endl;
    }
    RPN rpn;
    std::string input = argv[1];
    int result = rpn.evaluate(input);
    if (result != -1) {
        std::cout << result << std::endl;
    }
    return 0;
}