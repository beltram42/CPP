/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:26 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 23:08:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

// Libraries **************************************************************** //

#include "Weapon.hpp"
// **************************************************************** Libraries //


// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Colours ****************************************************************** //
// ****************************************************************** Colours //


// Classes ****************************************************************** //

class HumanB {

private:

	std::string	_privateName;
	Weapon*		_privateWeapon;

public:

	HumanB(std::string name);
	~HumanB();

	void		setName(std::string name);
	std::string	getName(void) const;
	void		setWeapon(Weapon& weapon);
	void		attack(void);

	
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //



#endif // ********************************************************** HUMANB_H //