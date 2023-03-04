/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:28:59 by alambert          #+#    #+#             */
/*   Updated: 2023/03/04 18:12:53 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {

	std::cout << "Constructor called" << std::endl;

	//this->setFoo(0);
	//std::cout << "this->getFoo()" << this->getFoo() << std::endl;

	return;
}

Contact::~Contact(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}