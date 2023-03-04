/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:28:54 by alambert          #+#    #+#             */
/*   Updated: 2023/03/04 18:12:58 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Phonebook(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}