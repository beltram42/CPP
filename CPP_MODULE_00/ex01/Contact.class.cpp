/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:28:59 by alambert          #+#    #+#             */
/*   Updated: 2023/03/08 18:52:15 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

// Constructor / Destructor ********************//

Contact::Contact(void) {
	
}

Contact::~Contact(void) {

}
// ******************** Constructor / Destructor //



// Member functions *****************************//

std::string    Contact::getField(int index) {
	if (index == 0)
		return (this->_privateFirstName);
	else if (index == 1)
		return (this->_privateLastName);
	else if (index == 2)
		return (this->_privateNickname);
	else if (index == 3)
		return (this->_privatePhoneNumber);
	else if (index == 4)
		return (this->_privateDarkestSecret);
	return 0;
}

void    Contact::setField(std::string token, int index) {
	if (index == 0) {
        this->_privateFirstName = token;
		return;
    }
	else if (index == 1) {
        this->_privateLastName = token;
		return;
    }
	else if (index == 2) {
        this->_privateNickname = token;
		return;
    }
	else if (index == 3) {
        this->_privatePhoneNumber = token;
		return;
    }
	else if (index == 4) {
        this->_privateDarkestSecret = token;
		return;
    }
	return;
}
// ***************************** Member functions //