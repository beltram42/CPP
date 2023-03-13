/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:19:23 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 18:31:31 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const {
	return this->_Foo;
}

int	Sample::compare(Sample * other) const {
	// On va recuperer l'adresse d'une instance quelconque
	// et on va a chaque fois faire la comparaison de la valeur
	// de notre entier _Foo entre l'instance courrante et 
	// l'instance qui nous a ete passeeen parametre.

	// Comme l'entier _Foo est private, on va utiliser l'accesseur
	// getFoo pour obtenir la valeur depuis l'instance qui nous
	// aura ete passee en parametre.


	if(this->_Foo < other->getFoo())
		return -1;
	else if(this->_Foo > other->getFoo())
		return 1;
	return 0;
}