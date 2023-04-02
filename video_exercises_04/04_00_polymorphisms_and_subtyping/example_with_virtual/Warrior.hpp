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

	virtual void			sayHello(std::string const & target);
	// le linkage est dynamique : il y a une resolution dynamique de l'appel de 
	// fonction = a la compilation on determine la fonction qu'on appelle par
	// le type de la variable. Et ca peut changer a l'execution selon ce que
	// l'utilisateur choisira : un mage, un warrior?
	// Grace a virtual, la resolution de l'appel de fonction est dynamique :
	// elle se fait a l'execution : ici le compilateur descend l'arbre d'heritage
	// voit d'abord que c'est un Character mais que c'est en fait un Warrior.
	//
	// Une fonction membre virtuelle est **__une methode__**.
	// Une methode est une fonction membre dont la resolution est dynamique.


protected:
	/*aDATA*/

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** WARRIOR_H