/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:37:37 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 19:17:55 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;
	Sample::_NbInst += 1;
	// ce compteur est un attribu non membre
	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	Sample::_NbInst -= 1;
	return;
}

int	Sample::getNbInst(void) {
	return Sample::_NbInst;
}

int	Sample::_NbInst = 0;
	// Compte tenu que c'est un attribut non membre, on ne peut 
	// pas l'initialiser dans un constructeur, et ilfaut 
	// l'initialiser a part
