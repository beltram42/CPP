/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/05/01 14:07:38 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

// Libraries **************************************************************** //
#include <iostream>
#include <map>
#include <exception>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
#define CLEAR "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"
#define MAGENTA "\e[35m"
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Templates **************************************************************** //
// **************************************************************** Templates //

// Structs ****************************************************************** //
// ****************************************************************** Structs //

// Classes ****************************************************************** //
class BitcoinExchange {
public:
	BitcoinExchange(void);												// Canonical
	BitcoinExchange(BitcoinExchange const & toCopy);					// Canonical

    BitcoinExchange(std::string const & filename);

	~BitcoinExchange(void);												// Canonical


	BitcoinExchange const & operator=(BitcoinExchange const & toCopy);	// Canonical


    float	getPrice(const std::string& date_str) const;

private:
    std::map<std::string, float> _prices;
};
// ****************************************************************** Classes //


// Non Member functions ***************************************************** //
bool	is_valid_date(const std::string& date_str);
// ***************************************************** Non Member functions //

#endif // ************************************************* BITCOINEXCHANGE_H //