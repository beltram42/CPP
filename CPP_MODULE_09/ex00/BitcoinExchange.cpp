/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/01 14:49:47 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructor Destructor *************************************************** //
BitcoinExchange::BitcoinExchange(void) 	{
	std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & toCopy): _prices(toCopy._prices)	{
	std::cout << "Copy constructor called for: " << this << ", from: " << &toCopy << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string const & filename) {
	std::cout << "Constructor called for: " << this << " " << filename << std::endl;
    std::ifstream file(filename.c_str());
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
		
    std::map<std::string, float>::const_iterator it = _prices.find(date_str);
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

bool	is_valid_date(const std::string& date_str)	{
    std::istringstream ss(date_str);

    int year, month, day;

    if (ss >> year && ss.get() == '-' && ss >> month && ss.get() == '-' && ss >> day && ss.eof())	{
        bool is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		// Check if the year is a leap year (divisible by 4 but not by 100, or divisible by 400)
        if (month >= 1 && month <= 12)	{
        // Check if the month is valid (between 1 and 12)
            switch (month)	{
            // Check if the day is valid (between 1 and 31, or between 1 and 30 for some months, or between 1 and 28/29 for February)
                case 2:
                    if (day >= 1 && day <= (is_leap_year ? 29 : 28))
                        return true;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if (day >= 1 && day <= 30)
                        return true;
                    break;
                default:
                    if (day >= 1 && day <= 31)
                        return true;
            }
        }
    }
    return false;
}
// ----------------------------------------------- Other  member functions -- //

// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //
