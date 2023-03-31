/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:35:42 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 11:40:24 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

// Libraries **************************************************************** //
#include "ClapTrap.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	ScavTrap : public  ClapTrap	{

public:
	ScavTrap(void);												// Cannonical
	ScavTrap(ScavTrap const & inst);							// Cannonical
	ScavTrap(std::string name);
	ScavTrap(std::string name, int HitP, int NrgP, int AttD);

	~ScavTrap(void);											// Cannonical

	ScavTrap &		operator=(ScavTrap const & rhs);			// Cannonical

	void	attack(std::string const & target);
	void	guardGate(void);

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ******************************************************** SCAVTRAP_H //