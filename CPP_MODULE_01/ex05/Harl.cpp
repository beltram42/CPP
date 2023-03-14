/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:27:56 by alambert          #+#    #+#             */
/*   Updated: 2023/03/14 14:55:11 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Constructor Destructor *************************************************** //
Harl::Harl(/* args */) {
	std::cout << "Constructor called: now Harl's mouth open..." << std::endl;
}

Harl::~Harl() {
	std::cout << "Destructor called: Harl's mouth shut." << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

void	Harl::complain(std::string level) {
	void (Harl::*functPointer[4])(void);

	functPointer[0] = &Harl::_debug;
	functPointer[1] = &Harl::_info;
	functPointer[2] = &Harl::_warning;
	functPointer[3] = &Harl::_error;

	std::string strokes[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == strokes[i])
			return (this->*functPointer[i])();
 	}
}

void    Harl::_debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void    Harl::_info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::_warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::_error(void) {
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
// ********************************************************* Member functions //