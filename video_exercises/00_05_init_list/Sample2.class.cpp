/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:12:22 by alambert          #+#    #+#             */
/*   Updated: 2023/03/02 18:46:33 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2 (char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) { // syntaxe d'initialisation, equivalente a Sample1.class.cpp

	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample2::~Sample2 (void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

