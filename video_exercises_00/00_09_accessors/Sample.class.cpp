/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:46:27 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 17:12:17 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo()" << this->getFoo() << std::endl;

	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const {
	return this->_Foo;
}

void	Sample::setFoo(int v) {
	if(v >= 0)
		this->_Foo = v;
	// Exemple d'utilisation d'accesseur :
	// ici controle que l'utilisateur attribuera bien 
	// une valeur positive a _Foo ; et s'il essait d'attribuer
	// une valeur negative il n'y aura pas de modification
	// de la valeur.
	return;
}