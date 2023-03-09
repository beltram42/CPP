/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:28:54 by alambert          #+#    #+#             */
/*   Updated: 2023/03/08 18:54:43 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

// Constructor / Destructor ********************//

Phonebook::Phonebook(void) {

	this->_privateContactSum = 0;
    this->setExit(0);
	return;
}

Phonebook::~Phonebook(void) {

}
// ******************** Constructor / Destructor //



// Member functions *****************************//

bool	Phonebook::getExit(void) const {
	return this->_Exit;
}

void	Phonebook::setExit(bool tf) {
	this->_Exit = tf;
}

void    Phonebook::quit(bool tf) {
    std::cout << GREEN "*** Exit: contacts lost" << std::endl;
    this->setExit(tf);
    return;
}

void Phonebook::printdetails(int index)
{
    std::cout << "First Name: " << this->_privateRoster[index].getField(0) << std::endl;
    std::cout << "Last Name: " << this->_privateRoster[index].getField(1) << std::endl;
    std::cout << "Nickname: " << this->_privateRoster[index].getField(2) << std::endl;
    std::cout << "Phone #: " << this->_privateRoster[index].getField(3) << std::endl;
    std::cout << "Darkest secret: " << this->_privateRoster[index].getField(4) << std::endl;
	std::cout << "" << std::endl;    
    return;
}

void    Phonebook::textformat(std::string str) {
	std::cout <<  "|";
	if (str.size() <= 10) {
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << str;
	}
	else {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

void    Phonebook::searchContact(void) {
    if (this->_privateContactSum == 0) {	
		std::cout <<  GREEN "*** PHONEBOOK is empty -> ADD contacts" << std::endl << std::endl;
		return;
	}
	Phonebook::printarray();
    std::cout << std::endl;
	Phonebook::indexgate();
    return;
}

void	Phonebook::printarray() {
	char index(0);
	
	std::cout << std::endl;
    std::cout << GREEN "|||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
    for (int i(0) ; i < this->_privateContactSum && i < 8 ; i++) { 
        index = i + '0' + 1;
        std::cout << "|         " << index; 
		this->textformat(this->_privateRoster[i].getField(0));
		this->textformat(this->_privateRoster[i].getField(1));
		this->textformat(this->_privateRoster[i].getField(2));
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
}

void	Phonebook::indexgate() {
	std::string str;
	int index(0);
	
    while (1) {
        std::cout << GREEN  "Enter contact index:" << std::endl;
        std::getline(std::cin, str);
		std::cout << std::endl;
		index = std::atoi(str.c_str());
        if (std::cin.eof()) {
            this->setExit(1);
            return;
        }
        else if (index > this->_privateContactSum || str.size() > 1 || str[0] < '1' || index == 0) {
            std::cout << "*** Invalid entry. ";
        }
        else {
	        this->printdetails(index - 1);
            break;
        }
    }
}

void   Phonebook::fillContact(std::string field, int index)
{
    std::string entry;

	while (1) {
		std::cout << field << ": ";
		getline(std::cin, entry);
		while (strcspn(entry.c_str(), "	") != entry.size()) {
			entry.erase(std::strcspn(entry.c_str(), "	"), 1);
		}
        if (std::cin.eof()) {
            this->setExit(1);
            return;
        }
        if (entry.empty())
            std::cout << "*** Mandatory field" << std::endl;
        else {
            this->_privateRoster[this->_privateContactSum % 8].setField(entry, index);
            break;
        }
	}
}

void   Phonebook::addContact( void ) {
	std::cout << GREEN "" << std::endl;

    this->fillContact("First name", 0);
    this->fillContact("Last name", 1);
    this->fillContact("Nickname", 2);
    this->fillContact("Phone #", 3);
    this->fillContact("Darkest Secret", 4);
    this->_privateContactSum += 1;

	std::cout << std::endl;
    return;
}
// ***************************** Member functions //