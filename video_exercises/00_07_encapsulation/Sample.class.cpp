/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:41:16 by alambert          #+#    #+#             */
/*   Updated: 2023/03/06 17:05:25 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
	// Depuis ce constructor, on peut aussi bien utiliser publicFoo
	// que _privateFoo, de meme pour publicBar et _privateBar
	// puisque, tout simplement nous sommes ici dans le code
	// du constructor, qui est une fonction membre de mon objet
	// (de ma classe), en consequence on peut y utiliser /acceder
	// aux attributs et aux fonctions membre private.

	// Hors des fonctions membre de la classe, comme dans le main
	// c'est impossible.
	
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::publicBar(void) const {
	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void Sample::_privateBar(void) const {
	std::cout << "Member function __privateBar called" << std::endl;
	return;
}