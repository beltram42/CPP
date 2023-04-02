/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:48:55 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 11:25:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

// Libraries **************************************************************** //
#include <iostream>
#include <string>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	Character	{

public:
	Character(void);												// Canonical
	Character(Character const & inst);								// Canonical

	virtual ~Character(void);										// Canonical

	virtual void			sayHello(std::string const & target);
	// le linkage est dynamique.


protected:
	/*aDATA*/

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** CHARACTER_H //