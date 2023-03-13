/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:24:33 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 23:06:47 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

// Libraries **************************************************************** //

#include "Weapon.hpp"
// **************************************************************** Libraries //


// Enums ******************************************************************** //
// ******************************************************************** Enums //


// Colours ****************************************************************** //
// ****************************************************************** Colours //


// Classes ****************************************************************** //

class HumanA {

private:

	std::string	_privateName;
	Weapon&		_privateWeapon;

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	std::string	getName(void) const;
	void		attack(void);
	
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //



#endif // ********************************************************** HUMANA_H //