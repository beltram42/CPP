/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:35:51 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 11:37:16 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42) {
	// !! L'initialisation "liste" (c-a-d ici ": pi(f), qd(42)")
	// permet d'initialiser une const dans une classe.

	// Comme pi est une constance, on ne peut pas lui
	// assigner une valeur apres l'avoir declaree,
	// la seule manniere qu'on avait en C d'attribuer
	// une valeur a une const c'etait au moment 
	// de la declaration genre : int const a = 42;.
	
	// De la meme manniere en C++, ici,
	// on n'assigne pas le valeur f a l'attribut pi, 
	// on initialise l'attribut pi a la valeur f.

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void) const {
	// const, place ici apres la fonction
	// avant la { signifie au compilateur
	// que cette fonction membre ne modifiera
	// jamais l'instance courrante.
	// Ce qui veut dire que nullepart dans le
	// code de cette fonction on n'aura une 
	// assignation du type this->attribut = valeur.
	
	std::cout << "this->pi: " << this->pi << std::endl;
	std::cout << "this->qd: " << this->qd << std::endl;

	// En consequence, si on decidait d'ecrire ici :
	// this->qd = 0;
	// ca ne compilerait pas et g++ ecrirait :
	// Sample.class.cpp: In memner function 'void Sample::bar const':
	// Sample.class.cpp: error: assignment of member 'Sample::qd' in read-only object
	// this->qd = 0;
	// => const permet, lors de la creation de classes compliquees,
	// de securiser la classe et eviter que le programme n'explose.
	// D'une manniere generale, plus le code sera const et read-only,
	// plus le code sera robuste sur le long terme.
	return;
}