/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:28:49 by alambert          #+#    #+#             */
/*   Updated: 2023/03/04 18:11:44 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

//------ librairies------------
#include "Contact.class.hpp"


//------ classes------------
class	Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	char	ADD(char);
	void	SEARCH(char) const;
	void	EXIT(void) const;
	
	
private:
	/*Data*/
};

#endif // **************************** PHONEBOOK_CLASS_H //