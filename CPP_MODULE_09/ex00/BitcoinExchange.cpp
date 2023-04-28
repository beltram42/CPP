/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/28 19:37:33 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructor Destructor *************************************************** //
BitcoinExchange::BitcoinExchange(void) 	{
	std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & toCopy): _prices(toCopy._prices)	{
	std::cout << "Copy constructor calle for: " << this << ", from: " << &toCopy << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string const & filename) {
	std::cout << "Constructor calle for: " << filename << std::endl;
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: could not open file.\n";
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date_str;
        float price;
        if (std::getline(iss, date_str, ',') && iss >> price) {
            _prices[date_str] = price;
        }
    }
}

BitcoinExchange::~BitcoinExchange(void)	{
	std::cout << "Destructor called for: " << this << std::endl;
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
float 	BitcoinExchange::getPrice(std::string const & date_str) const {
        if (_prices.empty()) {
            std::cerr << "Error: empty price database.\n";
            return -1;
        }
		
        std::map<int> it = _prices.find(date_str);
        if (it == _prices.end()) {
            it = _prices.lower_bound(date_str);
            if (it == _prices.begin()) {
                std::cerr << "Error: no available date.\n";
                return -1;
            }
            --it;
        }
        return it->second;
    }
// ----------------------------------------------- Other  member functions -- //

// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //
