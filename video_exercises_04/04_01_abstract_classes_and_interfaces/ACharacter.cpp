/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:48:51 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 10:42:39 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ACharacter.hpp"

// Constructor Destructor *************************************************** //
ACharacter::ACharacter(void)	{
	std::cout << "ACharacter: Default constructor has been called" << std::endl;
}

ACharacter::ACharacter(ACharacter const & inst)	{
	*this = inst;
	std::cout << "ACharacter: Copy constructor has been called" << std::endl;
}

ACharacter::~ACharacter(void)	{
	std::cout << "ACharacter: Destructor called" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
void		ACharacter::sayHello(std::string const & target)	{
	std::cout << "Hey you! " << target << std::endl;
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //