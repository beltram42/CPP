/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warrior.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:49:02 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 11:25:32 by alambert         ###   ########.fr       */
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
	Warrior(void);												// Canonical
	Warrior(Warrior const & inst);								// Canonical

	~Warrior(void);												// Canonical

	void			sayHello(std::string const & target);
	// le linkage est statique : il y a une resolution statique de l'appel de 
	// fonction = a la compilation on determine la fonction qu'on appelle par
	// le type de la variable.
	// Ici, a la compilation l'objet Warrior qui est de type Character va donc
	// utiliser la fonction sayHello de la classe Character.
	// Et ca ne peut pas changer a l'execution.

protected:
	/*aDATA*/

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** WARRIOR_H