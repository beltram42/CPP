/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:28:57 by alambert          #+#    #+#             */
/*   Updated: 2023/03/08 19:12:23 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

int	main(int ac, char **av) {

	Phonebook	repertoire;
	std::string cmd("StandBy");

	(void)av;
    if (ac == 1)
    {
        std::cout << GREEN "|||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|                 PHONEBOOK                 |" << std::endl;
		std::cout << "|               now running...              |" << std::endl;
		std::cout << "|                                           |" << std::endl;
		std::cout << "|     Copyright Kiwi Computer, Inc 1980     |" << std::endl;
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "" << std::endl;
        std::cout << "    Available commands: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "" << std::endl;
        while (!repertoire.getExit()) {
            getline(std::cin, cmd);
            if (std::cin.eof()) {
                exit(EXIT_FAILURE);
            }
            else if (!cmd.compare("ADD")) {
                repertoire.addContact();
            }
            else if (!cmd.compare("SEARCH")) {
                repertoire.searchContact();
            }
            else if (!cmd.compare("EXIT")) {
                repertoire.quit(1);
            }
        }
    }
    else
        std::cout << GREEN "Program will start on ./Phonebook only" CLEAR << std::endl; 
    return (0);
}