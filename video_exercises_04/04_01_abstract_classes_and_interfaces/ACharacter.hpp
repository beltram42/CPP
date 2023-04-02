/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:48:55 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 11:25:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACHARACTER_H
# define ACHARACTER_H

// Libraries **************************************************************** //
#include <iostream>
#include <string>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	ACharacter	{

public:
	ACharacter(void);												// Canonical
	ACharacter(ACharacter const & inst);							// Canonical

	virtual ~ACharacter(void);										// Canonical

	void	sayHello(std::string const & target);
	
	virtual void	attack(std::string const & target) = 0;
	// Le = 0 signifie qu'on definit la methode comme etant une methode pure :
	// - on ne peut pas implementer la methode (= 0),
	// - on ne va pas pouvoir instancier la classe => elle aura un 
	//   comportement qui ne sera pas la : c'est une classe abstraite. 
	//   => raison pour laquelle on nomme la classe avec le prefixe A :
	//      ACharacter 
	//
	// On a donc ici une methode pure, c-a-d qu'elle n'existe pas reellement,
	// mais que quand on en herite, on herite de ses comportements : en 
	// l'occurence attaquer.
	// En revanche, un ACharacter ne saura pas attaquer.
	//
	// Pour qu'une classe qui herite d'une classe abstraite puisse etre instanciee,
	// ici la classe Warrior, doit implementer les comportement declares comme 
	// abstraits dans la classe parente.
	// Dans le cas contraire elle serait elle aussi abstraite et on ne pourra pas
	// l'instancier non plus.
	// => raison pour laquelle ici, la classe Warrior a une attaque, parce qu'on
	// veut pouvoir l'instancier.
	//
	// Une classe qui n'a que des comportements abstrait est une interface,
	// prefixee par I, comme ici avec ICoffeeMaker.
	// Une interface n'a aucun attribut.
	//
	// Utilite : 
	// - contrat : definir prealablement COMMENT seront utilisees les machines
	//   a cafe ; le developpeur qui en fera le code peut les concevoir comme
	//   il veut sous reserve qu'elles fonction bien comme on l'a pre-determine.
	// - manipuler des types concrets a partir :
	//   . d'un tableau d'objets qui n'ont pas forcement le meme type,
	//   . d'un conteneur...
	// - etc.


protected:
	/*aDATA*/

private:
	
	std::string	_privateName

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** ACHARACTER_H //