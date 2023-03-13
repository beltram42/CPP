/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student1.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:56:36 by alambert          #+#    #+#             */
/*   Updated: 2023/03/10 18:30:53 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student1.class.hpp"


// Constructor / Destructor ********************//

Student::Student(std::string login) {
	this->setLogin(login);
	std::cout << "Student " << this->getLogin() << " is born" << std::endl;
}

Student::~Student(void) {
	std::cout << "Student " << this->getLogin() << " died" << std::endl;
}
// ******************** Constructor / Destructor //


// Member functions *****************************//

void		Student::setLogin(std::string token) {
	this->_privateLogin = token;
}

std::string	Student::getLogin(void) const {
	return this->_privateLogin;
}
// ***************************** Member functions //