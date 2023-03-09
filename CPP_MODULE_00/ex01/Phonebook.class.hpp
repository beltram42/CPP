/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:28:49 by alambert          #+#    #+#             */
/*   Updated: 2023/03/08 15:49:39 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H



// Colours ********************//

#define CLEAR "\e[0m"
#define GREEN "\e[0;32m"
//******************** Coulours //



// Libraries ********************//

#include "Contact.class.hpp"
//******************** Libraries //



// Classes **********************//

class	Phonebook {

public:
	Phonebook(void); // constructor
	~Phonebook(void); // destructor

	bool	getExit(void) const;
    void	setExit(bool tf);
	
	void    addContact(void);
	void    searchContact(void);
	void	printarray(void);
	void	indexgate(void);
	void    fillContact(std::string s2, int index);
	void    textformat(std::string str);
	void    printdetails(int index);
	void    quit(bool tf);


private:

	Contact _privateRoster[8];
	int     _privateContactSum;
	bool    _Exit;

};

//********************** Classes //

#endif // **************************** PHONEBOOK_CLASS_H //