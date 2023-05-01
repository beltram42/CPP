/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/05/01 17:05:58 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string.h>

struct membuf : std::streambuf
{
    membuf(char* begin, char* end) {
        this->setg(begin, begin, end);
    }
};
int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Error: no input file provided.\n";
        return 1;
    }

    std::string input_filename = argv[1];
    std::ifstream input_file(input_filename.c_str());
    if (!input_file) {
        std::cerr << "Error: could not open input file.\n";
        return 1;
    }


    BitcoinExchange exchange("data.csv");

    std::string line;
	char buf[100];
	bzero(buf, sizeof(buf));

	
    while (input_file.read(buf, 99)) {
        std::istringstream 	iss(line);
        std::string 		date_str;
        float value;

		//std::cout << "buf :" << buf << std::endl;
		//continue;
		membuf sbuf(buf, buf + 99);
		std::istream in(&sbuf);
		while (std::getline(in, line))
		{
			if (std::getline(in, date_str, '|') && in >> value) {
				if (value <= 0 || value > 1000) {
					std::cerr << "Error: invalid value.\n";
					continue;
				}
				date_str.erase(10, 1);
				char const *s = date_str.c_str();
				if (is_valid_date(date_str) == 0 || date_str.size() != 10 || s[4] != '-' || s[7] != '-')	{
					std::cerr << "Error: invalid date.\n";
					continue;
				}
				float exchange_rate = exchange.getPrice(date_str);
				if (exchange_rate < 0) {
					continue;
				}
				float result = value * exchange_rate;
				std::cout << date_str << " => " << value << " = " << result << "\n";
			} 
			else if (!line.compare("date | value"))
				continue;
			else {
				std::cerr << "Error: bad input => " << line << "\n";
			}
		}
		bzero(buf, sizeof(buf));
    }

    return 0;
}