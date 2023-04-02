/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:35:42 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 11:25:32 by alambert         ###   ########.fr       */
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
	ScavTrap(void);												// Canonical
	ScavTrap(ScavTrap const & inst);							// Canonical
	ScavTrap(std::string name);
	ScavTrap(std::string name, int HitP, int NrgP, int AttD);

	~ScavTrap(void);											// Canonical

	ScavTrap &		operator=(ScavTrap const & rhs);			// Canonical

	void	attack(std::string const & target);
	void	guardGate(void);

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ******************************************************** SCAVTRAP_H //