/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:19:44 by alambert          #+#    #+#             */
/*   Updated: 2023/03/02 17:43:37 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample (void) {
std::cout << "Constructor called" << std::endl;

this->foo = 42; // this est un pointeur qui designe l'instance courrante -- et qui permet ici de mettre la variable foo de mon instance courrante a la valeur 42 ; on utilise ici une fleche puisque this est un pointeur
std::cout << "this->foo: " << this->foo << std::endl;

this->bar(); // idem, on appelle ici une fonction -- la fonction bar de la classe Sample -- a partir d'un pointeur

return;
}

Sample::~Sample (void) {
std::cout << "Destructor called" << std::endl;
return;
}

void Sample::bar(void) { // contrairement aux apparences, la fonction prend en realite en parametre un pointeur sur l'instance courrante.
	std::cout << "Member function bar called" << std::endl;
	return;
}