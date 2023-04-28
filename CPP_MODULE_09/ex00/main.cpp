/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/28 19:13:45 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
https://www.icloud.com/iclouddrive/0abbhxMRJUy1O03Y2q7Kh6rjw#data
https://www.icloud.com/iclouddrive/067R8O-wDMbxcdZ3iKl7XgTdg#input
*/


int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Error: no input file provided.\n";
        return 1;
    }

    std::string input_filename = argv[1];
    std::ifstream input_file(input_filename);
    if (!input_file) {
        std::cerr << "Error: could not open input file.\n";
        return 1;
    }

    BitcoinExchange exchange("bitcoin_prices.csv");

    std::string line;
    while (std::getline(input_file, line)) {
        std::istringstream iss(line);
        std::string date_str;
        float value;
        if (std::getline(iss, date_str, '|') && iss >> value) {
            if (value <= 0 || value > 1000) {
                std::cerr << "Error: invalid value.\n";
                continue;
            }

            float exchange_rate = exchange.get_price(date_str);
            if (exchange_rate < 0) {
                continue;
            }

            float result = value * exchange_rate;
            std::cout << date_str << " => " << value << " = " << result << "\n";
        } else {
            std::cerr << "Error: bad input => " << line << "\n";
        }
    }

    return 0;
}