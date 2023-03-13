/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student3.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:40:58 by alambert          #+#    #+#             */
/*   Updated: 2023/03/11 18:37:43 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student3.class.hpp"


// Constructor Destructor ************************************************** //

Student::Student(std::string const & login) {
	this->setLogin(login);
	//std::cout << "Student " << this->getLogin() << " is born" << std::endl;
}

Student::~Student() {
	
}
// ************************************************** Constructor Destructor //



// Member functions ******************************************************** //

void	Student::setLogin(std::string token) {
	this->_privateLogin = token;
}

std::string&	Student::getLoginRef(void) {
	return this->_privateLogin;
}

std::string*	Student::getLoginPtr() {
	return &(this->_privateLogin);
}

std::string const & Student::getLoginRefConst (void) const {
	return this->_privateLogin;
}

std::string const * Student::getLoginPtrConst() const {
	return &(this->_privateLogin);
}
// ******************************************************** Member functions //



// Non Member functions **************************************************** //
// **************************************************** Non Member functions //
