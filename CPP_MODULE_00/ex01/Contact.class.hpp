/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:29:02 by alambert          #+#    #+#             */
/*   Updated: 2023/03/08 16:53:09 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

// Libraries ********************//
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <stdlib.h>

//******************** Libraries //


// Classes **********************//

class	Contact {

public:
	Contact(void); // Constructor
	~Contact(void); // Destructor

	std::string getField(int index);
    void	setField(std::string token, int index);


private:

    std::string _privateFirstName;
    std::string _privateLastName;
    std::string _privateNickname;
    std::string _privatePhoneNumber;
    std::string _privateDarkestSecret;
	
};
//********************** Classes //

#endif // ******************* CONTACT_CLASS_H //