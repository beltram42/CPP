/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:49:02 by alambert          #+#    #+#             */
/*   Updated: 2023/04/01 18:17:29 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARRIOR_H
# define WARRIOR_H

// Libraries **************************************************************** //
#include "Character.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	Warrior	: public Character {

public:
	Warrior(void);												// Cannonical
	Warrior(Warrior const & inst);								// Cannonical

	~Warrior(void);												// Cannonical

	void			sayHello(std::string const & target);


protected:
	/*aDATA*/

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** WARRIOR_H