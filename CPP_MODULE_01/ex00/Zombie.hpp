/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:19:29 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 13:34:01 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

// Libraries **************************************************************** //

#include <iostream>
#include <string>
#include <cstring>
// **************************************************************** Libraries //


// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Colours ****************************************************************** //
// ****************************************************************** Colours //


// Classes ****************************************************************** //

class	Zombie {

private:

	std::string	_privateName;


public:

	// Zombie.cpp ---------------------------------------------------------- //
	Zombie (std::string name);
	~Zombie(void);
	
	void		setName(std::string token);
	void		announce(void);

	std::string getName(void) const;


	// newZombie.cpp -------------------------------------------------------- //
	Zombie*		newZombie(std::string name);
};

// ****************************************************************** Classes //



// Non Member functions ***************************************************** //

	// randomChump.cpp ------------------------------------------------------ //
	void		randomChump(std::string name);

// ***************************************************** Non Member functions //



#endif // ********************************************************** ZOMBIE_H //