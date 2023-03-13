/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student1.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:44:39 by alambert          #+#    #+#             */
/*   Updated: 2023/03/10 18:30:11 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT1_CLASS_H
# define STUDENT1_CLASS_H


// Libraries ********************//

#include <iostream>
#include <string>
//******************** Libraries //


// Classes **********************//

class	Student {

public:
	Student(std::string login);
	~Student(void);

	void		setLogin(std::string token);
	std::string	getLogin(void) const;

private:

	std::string _privateLogin;

};
//********************** Classes //

#endif // ******************* STUDENT1_CLASS_H //
