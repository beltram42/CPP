/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:36:24 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 12:04:22 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_H
#define FRAGTRAP_H

// Libraries **************************************************************** //
#include "ClapTrap.hpp"
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	FragTrap : public  ClapTrap	{

public:
	FragTrap(void);												// Cannonical
	FragTrap(FragTrap const & inst);							// Cannonical
	FragTrap(std::string name);
	FragTrap(std::string name, int HitP, int NrgP, int AttD);

	~FragTrap(void);											// Cannonical

	FragTrap &		operator=(FragTrap const & rhs);			// Cannonical

	void	attack(std::string const & target);
	void 	highFivesGuys(void);

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ******************************************************** FRAGTRAP_H //