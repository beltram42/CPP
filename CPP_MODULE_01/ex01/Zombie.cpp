/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:21:35 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 17:53:09 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



// Constructor Destructor *************************************************** //

Zombie::Zombie (void) {
	std::cout << "Zombie: Constructor called..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie Destructor called!" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

void		Zombie::setName(std::string token) {
	this->_privateName = token;
}

std::string Zombie::getName(void) const {
	return this->_privateName;
}

void    Zombie::announce( void )
{
    std::cout << this->getName() << ": " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //